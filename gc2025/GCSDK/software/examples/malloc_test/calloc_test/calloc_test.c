/***************************************************************************
 * Project                      : shakti devt board
 * Name of the file	            : calloc_test.c
 * Brief Description of file    : test file for calloc.
 * Name of Author    	        : Suganthi Devaraj
 * Email ID                     : suganthijayadev1106@gmail.com

 Copyright (C) 2025  IIT Madras. All rights reserved.

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <https://www.gnu.org/licenses/>.

***************************************************************************/
/**
 * @file calloc_tests.c
 * @brief Test suite for calloc functionality including normal, edge cases, and stress tests.
 *
 * Each function is a standalone test that exercises a specific calloc behavior.
 * Run them one at a time from `main()` to observe heap allocation and logs.
 */
#include <stddef.h>
#include <stdint.h> 



/**
 * @brief Test normal allocation using calloc.
 *
 * Allocates 10 integers with calloc and checks whether all
 * elements are zero-initialized.
 */
void test_normal_allocation() {
    printf("\n[Test] Normal Allocation\n");
    int *arr = (int *)calloc(10, sizeof(int));
    if (arr) {
        int ok = 1;
        for (int i = 0; i < 10; i++) {
            if (arr[i] != 0) { ok = 0; break; }
        }
        printf(" \n-> Allocation %s, zero-initialisation check %s\n",
               arr ? "successful" : "failed",
               ok ? "passed" : "failed");
        free(arr);
    } else {
        printf("\n -> Allocation failed\n");
    }
}
/**
 * @brief Test calloc with zero elements or zero size.
 *
 * Verifies behavior when one of the arguments to calloc is zero.
 */
void test_zero_elements() {
    printf("\n[Test] Zero Elements Allocation\n");
    int *arr1 = (int *)calloc(0, sizeof(int));
    int *arr2 = (int *)calloc(10, 0);
    printf("\n -> calloc(0, sizeof(int)) returned %x\n", (void*)arr1);
    printf("\n -> calloc(10, 0) returned %x\n", (void*)arr2);
    free(arr1);
    free(arr2);
}
/**
 * @brief Test sequential allocations using calloc.
 *
 * Allocates two blocks back-to-back and prints their addresses
 * to observe sequential allocation pattern.
 */
void test_sequential_allocations() {
    printf("\n[Test] Sequential Allocations\n");
    int *a = calloc(5, sizeof(int));
    int *b = calloc(5, sizeof(int));
    printf(" -> Block A %x, Block B %x\n", (void*)a, (void*)b);
    free(a);
    free(b);
}
/**
 * @brief Test freeing NULL pointer.
 *
 * Verifies that calling free(NULL) executes safely without crashing.
 */
void test_free_null() {
    printf("\n[Test] Freeing NULL Pointer\n");
    free(NULL);
    free(0);
    printf(" -> free(NULL) executed safely\n");
}
/**
 * @brief Test double free scenario.
 *
 * Frees the same block twice. This is undefined behavior in C,
 * but used here to observe allocator’s response or logging.
 */
void test_double_free() {
    printf("\n[Test] Double Free Detection\n");
    int *a = calloc(5, sizeof(int));
    free(a);
    printf(" -> Freed once\n");
    free(a); // UB in C, but test harness may catch it
    printf(" -> Freed twice (undefined behavior)\n");
}
/**
 * @brief Test reuse of freed memory.
 *
 * Allocates a block, frees it, and allocates again to check if
 * allocator reuses the freed block and ensures zero-initialization.
 */
void test_reuse_freed() {
    printf("\n[Test] Reusing Freed Memory\n");
    int *a = calloc(5, sizeof(int));
    free(a);
    int *b = calloc(5, sizeof(int));
    int ok = 1;
    for (int i = 0; i < 5; i++) {
        if (b[i] != 0) { ok = 0; break; }
    }
    printf(" -> New block zero-init check %s\n", ok ? "passed" : "failed");
    free(b);
}
/**
 * @brief Test minimal allocation using calloc.
 *
 * Allocates a single byte and checks whether it is zero-initialized.
 */
void test_minimal_allocation() {
    printf("\n[Test] Minimal Allocation\n");
    char *c = (char*)calloc(1, 1);
    printf(" -> calloc(1,1) returned %x, value=%d\n", (void*)c, c ? *c : -1);
    free(c);
}
/**
 * @brief Test allocator behavior under fragmentation.
 *
 * Allocates and frees multiple blocks of varying sizes to
 * simulate fragmentation in the heap.
 */
void test_fragmentation() {
    printf("\n[Test] Fragmentation Handling\n");
    void *blocks[10];
    for (int i = 0; i < 10; i++) {
        blocks[i] = calloc(i+1, 16);
    }
    for (int i = 0; i < 10; i++) {
        free(blocks[i]);
    }
    printf(" -> Multiple alloc/free done\n");
}
/**
 * @brief Test maximum supported allocation.
 *
 * Attempts to allocate a near-maximum block size to confirm
 * upper limits of heap memory allocation.
 */
void test_max_supported_allocation() {
    printf("\n[Test] Maximum Supported Allocation\n");
    /*
   *@note This test allocation support only upto 63mb since heap accepts only 64kb size maxso malloc size should be less than 64mb]

    65519×1024 acceptable range
    more than that not supported
    heap size is 67,091,784 bytes
    Convert to Kb1 KB=1024 bytes   67,091,784÷1024=65,529.875 KB ≈ 65,530 KB
    Convert to MB   1 MB=1024×1024=1,048,576 bytes    67,091,784÷1,048,576≈63.97 MB
 so upto 63mb only supported 
 two test scenerios can be done here
    1. allocate 63mb and check for success
    2. allocate 64mb and check for failure
    67,091,784 bytes = 63.97 MB- acceptable range

✅ ≈ 64 MB
   */
    size_t max_size=63 * 1024 * 1024; // 63 MB check for success
    //size_t max_size=64 * 1024 * 1024; // 64 MB check for failure
    void *ptr = calloc(1, max_size);
    printf(" -> calloc(1, %x) returned %x\n", max_size, ptr);
    if (ptr) {
        int ok = 1;
        char *c = (char*)ptr;
        for (size_t i = 0; i < 16; i++) { // sample check
            if (c[i] != 0) { ok = 0; break; }
        }
        printf(" ->max calloc test done and Zero-initialization also check %s\n", ok ? "passed" : "failed");
        free(ptr);
    }
}

int main() {   
     
    /* malloc tests
     run one by one function in main to observe heap behavior - malloc functionality observation 
    */
    //test_normal_allocation();
    // test_zero_elements();
   // test_sequential_allocations();
   // test_free_null();
    //test_double_free();
    // test_reuse_freed();
  //  test_minimal_allocation();
    // test_fragmentation();
    test_max_supported_allocation();
    return 0;
}
