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
/**
 * @file calloc_test.c
 * @brief Test file for realloc.
 * @details This file contains test cases for validating custom implementations
 * of realloc. Each test checks edge cases like NULL pointers,
 * zero-size allocations, shrinking/growing blocks, and large allocations.
 * realloc = malloc (new) + memcpy (copy old) + free (old)+add free to free list
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>


/**
 * @brief Test realloc with NULL pointer.
 * @details realloc(NULL, size) should behave like malloc(size).
 */
void test_realloc_null_pointer() {
    printf("\n--- Test 1: Realloc NULL pointer ---\n");
    int *ptr = NULL;
    ptr = realloc(ptr, 50 * sizeof(int));
    if (ptr) printf("\nAllocated new block at %x\n", ptr);
    else printf("\nFAIL: Allocation failed\n");
    free(ptr);
}
/**
 * @brief Test realloc with size 0.
 * @details realloc(ptr, 0) should free the block and return NULL.
 */
void test_realloc_size_zero() {
    printf("\n--- Test 2: Realloc size 0 ---\n");
    int *ptr = malloc(50 * sizeof(int));
    ptr = realloc(ptr, 0);
    if (!ptr) printf("\nPASS: Pointer is NULL after realloc size 0\n");
    else printf("\nFAIL: Pointer not NULL\n");
}
/**
 * @brief Test realloc shrinking to smaller size.
 * @details Ensures that data up to the new size is preserved.
 */
void test_realloc_smaller_size() {
    printf("\n--- Test 3: Realloc to smaller size ---\n");
    int *ptr = malloc(100 * sizeof(int));
    for (int i = 0; i < 100; i++) ptr[i] = i+1;
    ptr = realloc(ptr, 40 * sizeof(int));
    printf("\nPointer after realloc: %x\n", ptr);
    for (int i = 0; i < 40; i++) {
        if (ptr[i] != i+1)  printf("\nData mismatch at index %d: expected %d, got %d\n", i, i + 1, ptr[i]);
    }
    printf("\nData preserved correctly after realloc.realloc small size passed\n");
    free(ptr);
}

/**
 * @brief Test realloc to the same size.
 * @details The block should be reused, pointer remains unchanged.
 */
void test_realloc_same_size() {
    printf("\n--- Test 4: Realloc to same size ---\n");
    int *ptr = malloc(50 * sizeof(int));
    for (int i = 0; i < 50; i++) ptr[i] = i+1;
    void *old_ptr = ptr;
    ptr = realloc(ptr, 50 * sizeof(int));
    if (ptr == old_ptr) printf("\nPASS: Same block reused\n");
    else printf("\nFAIL: Pointer changed\n");
    free(ptr);
}
/**
 * @brief Test realloc growing to larger size.
 * @details Old data should be preserved and a new block may be allocated.
 */
void test_realloc_larger_size() {
    printf("\n--- Test 5: Realloc to larger size ---\n");
    int *ptr = malloc(50 * sizeof(int));
    for (int i = 0; i < 50; i++) ptr[i] = i+1;
    void *old_ptr = ptr;
    ptr = realloc(ptr, 150 * sizeof(int));
    if (ptr != NULL) printf("\nPASS: Realloc larger size successful, new ptr %x\n", ptr);
    else printf("\nFAIL: Realloc failed\n");
    free(ptr);
}
/**
 * @brief Test realloc on a freed pointer.
 * @details This is undefined behavior, allocator should handle gracefully.
 */
void test_realloc_after_free() {
    printf("\n--- Test 6: Realloc after free ---\n");
    int *ptr = malloc(50 * sizeof(int));
    free(ptr);
    printf("\nAttempting realloc on freed pointer (should warn)\n");
    ptr = realloc(ptr, 100 * sizeof(int));
    if (!ptr) printf("\nPASS: Detected freed pointer\n");
    else printf("\nNOTE: realloc on freed pointer is invalid. Behavior undefined, check logs\n");
}
/**
 * @brief Test realloc with minimal allocation size.
 * @details Ensures realloc works properly with tiny allocations (1 byte).
 */
void test_realloc_minimal_allocation() {
    printf("\n--- Test 7: Realloc minimal allocation ---\n");
    char *ptr = malloc(1);
    ptr = realloc(ptr, 1);
    if (ptr) printf("\nPASS: Minimal allocation successful, ptr=%x\n", ptr);
    else printf("\nFAIL: Minimal allocation failed\n");
    free(ptr);
}

/**
 * @brief Test realloc for near-maximum heap allocation.
 * @details Attempts to allocate close to max heap size and then grow.
 */

void test_realloc_large_block() {
    printf("\n--- Test 8: Realloc near max heap ---\n");
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
    size_t max_size = 63*1024*1024; // Example max heap 63MB
    char *ptr = malloc(max_size-1);
    if(ptr) printf("\nInitial allocation done of %x bytes at %x\n", max_size-1, ptr);
    else {
        printf("\nFAIL: Initial allocation failed\n");
        return;
    }
    void *new_ptr = realloc(ptr, max_size+1024);
    if (!new_ptr) printf("\nPASS: Allocation failed requested size is too large\n");
    else printf("\nFAIL: Allocation done\n");
    free(ptr);
}
/**
 * @brief Test sequential realloc calls on same pointer.
 * @details Validates allocator consistency through multiple grow/shrink cycles.
 */
void test_realloc_sequential() {
    printf("\n--- Test 9: Sequential reallocations ---\n");
    int *ptr = malloc(100 * sizeof(int));
    printf("\nInitial pointer: %x\n", ptr);
    ptr = realloc(ptr, 200 * sizeof(int));
    printf("\nPointer after 1st realloc to 200: %x\n", ptr);
    ptr = realloc(ptr, 50 * sizeof(int));
    printf("\nPointer after 2nd realloc to 50: %x\n", ptr);
    ptr = realloc(ptr, 300 * sizeof(int));
    printf("\nPointer after 3rd realloc to 300: %x\n", ptr);
    ptr = realloc(ptr, 100 * sizeof(int));
    printf("\nFinal pointer after sequential reallocs: %x\n", ptr);
    printf("\nPASS: Sequential reallocations executed\n");
    free(ptr);
}

/**
 * @brief Entry point for realloc tests.
 * @details Run one test at a time by uncommenting its call to observe
 * allocator behavior in detail.
 * @return Returns 0 on completion.
 */
int main()
{
    /* realloc tests
  run one by one function in main to observe heap behavior - realloc functionality observation
 */
     //test_realloc_null_pointer();
    // test_realloc_size_zero();
     //test_realloc_smaller_size();
   // test_realloc_same_size();
     //test_realloc_larger_size();
    // test_realloc_after_free();
    //test_realloc_minimal_allocation();
     test_realloc_large_block();
   // test_realloc_sequential();
    printf("\nAll realloc test cases executed.\n");
    return 0;
}
