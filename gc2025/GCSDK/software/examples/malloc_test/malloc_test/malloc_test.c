/***************************************************************************
 * Project                      : shakti devt board
 * Name of the file	            : malloc_test.c
 * Brief Description of file    : test file for malloc.
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
 * @file malloc_test.c
 * @brief Test file for malloc and free functionality
 * @details This file provides multiple test cases to validate dynamic memory
 * allocation, reuse, fragmentation handling, and error cases like zero allocation 
 * and double free.
 */
#include <stddef.h>
#include <stdint.h> 

 int *b, *c, *d,*e;
    int i = 0;
    int n;
    n = 25;
/**
 * @brief Test basic malloc allocation and free
 * @details Allocates an integer array, initializes and prints values, then frees it.
 */
void test_malloc_basic()
{
        printf("\n size of array %d  - address of n : %x", n, &n);
        b = malloc(n * sizeof(int));
        printf("\n B's heap address from malloc %x - address of b storedin stack: %x", b, &b);
        for (i = 0; i < n; i++)
        {
            b[i] = i + 1;
        }
        for (i = 0; i < n; i++)
        {
            printf("\n b[%d]'s address is : %x and value is : %d", i, &b[i], b[i]);
        }
        free(b);
        printf("\nArray B is freed");
        // b = NULL;
    printf("\nb=%x", b);
}
/**
 * @brief Test malloc reuse with same size allocation
 * @details Frees a block and reallocates same size, checking whether memory is reused.
 */
void test_malloc_reuse_same_size()
    {
        printf("\n ########free and reuse test Free a block, then malloc same size#######");
         b = malloc(n * sizeof(int));
        printf("\n B's heap address from malloc %x - address of b storedin stack: %x", b, &b);
        for (i = 0; i < n; i++)
        {
            b[i] = i + 1;
        }
        for (i = 0; i < n; i++)
        {
            printf("\n b[%d]'s address is : %x and value is : %d", i, &b[i], b[i]);
        }
        free(b);
        c = malloc(n * sizeof(int));
        printf("\n C's heap address from malloc %x - address of c storedin stack: %x", c, &c);
        for (i = 0; i < n; i++)
        {
            c[i] = i + 1;
        }
        for (i = 0; i < n; i++)
        {
            printf("\n c[%d]'s address is : %x and value is : %d", i, &c[i], c[i]);
        }
        // Check for reuse
        if (b == c)
        {
            printf("\nMemory reused! c points to the same block as b");
        }
        else
        {
            printf("\nMemory not reused, new block allocated");
        }
        free(c);
        printf("\nArray c is freed");
        // c = NULL;
        printf("\nc=%x", c);
    }
    /**
 * @brief Test malloc reuse with bigger size
 * @details Allocates then frees, requests larger block, checks reuse or new allocation.
 */
void test_malloc_reuse_bigger_size()
    {

        printf("\n###### free and reuse test Free a block, then malloc bigger size size######");
        c = malloc(n * sizeof(int));
        printf("\n C's heap address from malloc %x - address of c storedin stack: %x", c, &c);
        for (i = 0; i < n; i++)
        {
            c[i] = i + 1;
        }
        for (i = 0; i < n; i++)
        {
            printf("\n c[%d]'s address is : %x and value is : %d", i, &c[i], c[i]);
        }
        int x;
        x = 30;
        printf("\n\n\nx value is %x", x);
        d = malloc(x * sizeof(int));
        printf("\n D's heap address from malloc %x - address of d storedin stack: %x", d, &d);
        for (i = 0; i < x; i++)
        {
            // printf("\nSetting value %d , %x",i+1,&d[i]);
            d[i] = i + 1;
        }
        for (i = 0; i < x; i++)
        {
            printf("\n d[%d]'s address is : %x and value is : %d", i, &d[i], d[i]);
        }
        free(d);
        // d = NULL;
        if (c == d)
        {
            printf("\nMemory reused! c points to the same block as b");
        }
        else
        {
            printf("\nMemory not reused, new block allocated");
        }
        printf("\nd=%x", d);
    }
    /**
 * @brief Test malloc reuse with smaller size
 * @details Allocates then frees, requests smaller block, checks reuse or new allocation.
 */
void test_malloc_reuse_smaller_size()
    {
        d = malloc(n * sizeof(int));
        printf("\n D's heap address from malloc %x - address of d storedin stack: %x", d, &d);
        printf("\n###### free and reuse test Free a block, then malloc smaller size######");
        for (i = 0; i < n; i++)
        {
            // printf("\nSetting value %d , %x",i+1,&d[i]);
            d[i] = i + 1;
        }
        for (i = 0; i < n; i++)
        {
            printf("\n d[%d]'s address is : %x and value is : %d", i, &d[i], d[i]);
        }
        int y;
        y = 15;
        printf("\n\n\nx value is %x", n);
        e = malloc(y * sizeof(int));
        printf("\n E's heap address from malloc %x - address of e storedin stack: %x", e, &e);
        for (i = 0; i < 7; i++)
        {
            // printf("\nSetting value %d , %x",i+1,&d[i]);
            e[i] = i + 1;
        }
        for (i = 0; i < y; i++)
        {
            printf("\n e[%d]'s address is : %x and value is : %d", i, &e[i], e[i]);
        }
        free(e);
        // e = NULL;
        if (d == e)
        {
            printf("\nMemory reused! d points to the same block as e");
        }
        else
        {
            printf("\nMemory not reused, new block allocated");
        }
        printf("\nd=%x", e);
    }

/**
 * @brief Test minimal allocation
 * @details Allocates 1 byte, writes and reads a character, then frees.
 */
void test_minimal_allocation()
{
    printf("\n malloc 1 byte and free and double free test");
    char *a;
    a = malloc(1 * sizeof(char));
    printf("\n a's address %x", a);
    *a = 'A';
    printf("\n a's value %c", *a);
}
/**
 * @brief Test double free behavior
 * @details Allocates and frees memory twice to observe undefined behavior.
 */
void test_double_free() {    
    printf("\n malloc 1 byte and free and double free test");
    char *a;
    a=malloc(1*sizeof(char));
    printf("\n a's address %x",a);
    *a='A';
    printf("\n a's value %c",*a);
    printf("\nAttempting double free");
    free(a);
    free(a);
    a=NULL;
    printf("\n a after free %x",a);
}
/**
 * @brief Test malloc with zero size
 * @details Attempts to allocate 0 bytes and prints result.
 */
void test_malloc_zero() {
printf("\n--- Allocate 0 bytes test ---");
char *p = malloc(0);
if (p == NULL) {
    printf("Allocation failed as expected\n");
} else {
    printf("Allocated 0 bytes at %x\n", p);
    free(p);
}
}

/**
 * @brief Test sequential allocations
 * @details Allocates multiple blocks sequentially and checks ordering in heap.
 */
void test_malloc_sequential_blocks() {
  printf("=== Sequential Small Alloc Test ===\n");
    int *b, *c, *d;
    int i = 0;
    int n;
    n = 25;
    printf("\n size of array %d", n);
    b = malloc(n * sizeof(int));
    printf("\n B's address %x", b);
    for (i = 0; i < n; i++)
    {                               
        b[i] = i + 1;
    }
    for (i = 0; i < n; i++)
    {
        printf("\n b[%d]'s address is : %x", i, &b[i]);
        printf("\n b[%d]'s value is : %d", i, b[i]);
    }
    c = malloc(n * sizeof(int));
    printf("\n C's address %x", c);
    for (i = 0; i < n; i++)
    {
        c[i] = i + 1;
    }
    for (i = 0; i < n; i++)
    {
        printf("\n c[%d]'s address is : %x", i, &c[i]);
        printf("\n c[%d]'s value is : %d", i, c[i]);
    }
     d = malloc(n * sizeof(int));
    printf("\n D's address %x", d);
    for (i = 0; i < n; i++)
    {
        d[i] = i + 1;
    }
    for (i = 0; i < n; i++)
    {
        printf("\n d[%d]'s address is : %x", i, &d[i]);
        printf("\n d[%d]'s value is : %d", i, d[i]);
    }
 // Check ordering
    if ((uintptr_t)b < (uintptr_t)c && (uintptr_t)c < (uintptr_t)d) {
        printf(" Blocks allocated sequentially without overlap\n");
    } else {
        printf(" Allocation ordering issue\n");
    }

     printf("\n###### free and reuse test Free a block, then malloc smaller size######");
}
/**
 * @brief Test reuse of freed memory
 * @details Frees a block then reallocates smaller block to check reuse.
 */

void test_reuse_allocation()
{
    int *b, *c, *d;
    int i = 0;
    int n;
    n = 25;
    printf("\n size of array %d", n);
    b = malloc(n * sizeof(int));
    printf("\n B's address %x", b);
    for (i = 0; i < n; i++)
    {
        b[i] = i + 1;
    }
    for (i = 0; i < n; i++)
    {
        printf("\n b[%d]'s address is : %x", i, &b[i]);
        printf("\n b[%d]'s value is : %d", i, b[i]);
    }
    free(b);
    n = 15;
    c = malloc(n * sizeof(int));
    printf("\n C's address %x", c);
    for (i = 0; i < n; i++)
    {
        c[i] = i + 1;
    }
    for (i = 0; i < n; i++)
    {
        printf("\n c[%d]'s address is : %x", i, &c[i]);
        printf("\n c[%d]'s value is : %d", i, c[i]);
    }
    if ((uintptr_t)b == (uintptr_t)c)
    {
        printf("\n Freed block reused at same address for frreed after smaller allocation ");
    }
    else
    {
        printf("\n Freed block was not reused");
    }
}
/**
 * @brief Test fragmentation handling
 * @details Allocates multiple blocks, frees middle ones to create fragmentation,
 * then allocates a small block to test splitting and reuse.
 */
void test_fragmentation() {
     printf("=== Fragmentation / Reuse Test ===\n");

    int *A, *B, *C, *D, *E;
    int i;
    int n = 25;

    // Allocate sequential blocks
    A = malloc(n * sizeof(int));
    B = malloc(n * sizeof(int));
    C = malloc(n * sizeof(int));
    D = malloc(n * sizeof(int));

    printf("\nAllocated blocks:\n");
    printf(" A = %x\n B = %x\n C = %x\n D = %x\n", A, B, C, D);

    // Initialize blocks with values
    for (i = 0; i < n; i++) {
        A[i] = i + 1;
        B[i] = i + 101;
        C[i] = i + 201;
        D[i] = i + 301;
    }

    // Print addresses and values (A block example)
    for (i = 0; i < n; i++) {
        printf("\nA[%d] addr: %x val: %d", i, &A[i], A[i]);
    }

    // Free middle blocks to create fragmentation
    free(B);
    free(C);
    printf("\nFreed B and C to simulate fragmentation\n");

    // Allocate a smaller block that fits into first free block (B)
    E = malloc(10 * sizeof(int));
    printf("\nAllocated small block E = %x\n", E);

    for (i = 0; i < 10; i++) {
        E[i] = i + 1001;
        printf("\nE[%d] addr: %x val: %d", i, &E[i], E[i]);
    }

    // Verify that E is inside B's region (fragmentation reuse)
    if ((uintptr_t)E >= (uintptr_t)B && (uintptr_t)E < (uintptr_t)C) {
        printf("\nE allocated inside B: fragmentation handled correctly\n");
    } else {
        printf("\nE allocation not inside freed B: check malloc splitting\n");
    }

    // Verify A and D still intact
    printf("\nA[0] = %d, D[0] = %d\n", A[0], D[0]);
}
/**
 * @brief Test large malloc allocation
 * @details Allocates a large buffer close to heap size limit (e.g. 38 KB) and verifies initialization.
 */
void test_malloc_large_block() {  
printf("=== malloc 40kb test ===\n");
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

 ≈ 64 MB
   */
      size_t wav_size=64 * 1024 * 1024; // 64 MB check for failure
     // size_t wav_size=63 * 1024 * 1024; // 63 MB check for success
    size_t n = wav_size / sizeof(uint8_t); // number of elements

    uint8_t *wav_data;
    size_t i;

    // Allocate
    wav_data = malloc(n * sizeof(uint8_t));
    if (!wav_data) {
        printf("\n malloc failed for larger 64MB WAV buffer\n");
        return 1;
    }

    printf("\n WAV buffer's address %x", wav_data);

    // Initialize with sample data (just for testing)
    for (i = 0; i < n; i++) {
        wav_data[i] = i % 256; // fill with 0..255 repeatedly
    }

    // Print first few bytes for verification
    size_t print_limit = 255; // don't print all 2MB
    for (i = 0; i < print_limit; i++) {
        printf("\n wav_data[%d]'s address is: %x value: %x", i, &wav_data[i], wav_data[i]);
    }
}
/**
 * @brief Main entry point
 * @details Runs malloc/free tests one by one to observe heap behavior.
 * @return 0 on success
 */
 int main()
{
    /* malloc tests
     run one by one function in main to observe heap behavior - malloc functionality observation
     */

   // test_malloc_basic();
    //test_malloc_reuse_same_size();
    // test_malloc_reuse_bigger_size();
     //test_malloc_reuse_smaller_size();
    // test_double_free();
    // test_malloc_zero();
   // test_malloc_sequential_blocks();
     //test_reuse_allocation();
    //test_fragmentation();
    test_malloc_large_block();
}