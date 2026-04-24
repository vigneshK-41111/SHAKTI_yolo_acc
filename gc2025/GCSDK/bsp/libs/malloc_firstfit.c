/***************************************************************************
 * Project               	   : shakti devt board
 * Name of the file	           : malloc_firstfit.c
 * Brief Description of file   : Malloc using First-fit algorithm code.
 * Name of Author    	       : Abhinav Ramnath & Suganthi Devaraj
 * Email ID                    : abhinavramnath13@gmail.com & suganthijayadev1106@gmail.com

 Copyright (C) 2019  IIT Madras. All rights reserved.

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
@file malloc_firstfit.c
@brief Malloc using First-fit algorithm code.
@detail This algorithm implements the malloc function using the first-fit algorithm. It allocates and frees blocks of memory for usage.
*/ 

#include<unistd.h>
#include<sys/types.h>
#include "platform.h"
#include "defines.h"
#include "log.h"
#define MIN_SPLIT 16   // 12 bytes header + 4 bytes minimum payload
extern char* _HEAP_SIZE[];
char* HEAP_SIZE = (char *)&_HEAP_SIZE;

struct Header *free_list = NULL;
//Header block denotes start of the segment
struct Header
{
	size_t size;//Stores the size of the memory block
	int free; //flag to indicate whether the block is free or not
	struct Header* next;
};

struct Header* global_base=NULL;//Initializes the pointer to NULL

/** @fn  struct Header* allocate_block(struct Header* last, size_t size)
 * @brief it allocates a block of given size 
 * @detail it allocates a block of the given size after receiving the parameter of the last allocated block
 * @param struct Header* last -  pointer to the last allocated memory or the end of the heap
 * @param size_t size - specifes the size of the block to be allocated
 * @return returns a pointer to the newly allocated block
 *         returns null if mmemory allocated or block allocation fails
 */
struct Header* allocate_block(struct Header* last, size_t size)
{
	uintptr_t x=0;

	log_trace("\nFunction allocate_block entered");
log_debug("\n Input: last=%x, last->size=%x, requested size=%x", last, last->size, size);
	if(last->size > size)
	// if (last->size > size + sizeof(struct Header)) // safer check might be too small to even hold a header
	{
		struct Header* newblock;
		void *p = last;

		p += size + sizeof(struct Header);
		 log_debug("Pointer moved forward to: %x _%x", p, sizeof(struct Header));

		x = p;

		x = ((( x) + ((REGSIZE) - 1)) & ~((REGSIZE) - 1));

		p = x;

		newblock = p;// for 64 bit Malloc rounds this up to the nearest multiple of 16:

		newblock->size = last->size - size - sizeof(struct Header);

		last->size = size;
		last->free = 0;
		last->next = newblock;

		newblock->free = 1;
		newblock->next = NULL;
 log_debug("\nAllocated block: %x, size=%x", last, last->size);
        log_debug("\n New free block: %x, size=%x", newblock, newblock->size);
		 log_trace("\n Function allocate_block exited");
		return last;
	}
	else {
	log_error("\nBlock too small: last->size=%x, requested=%x", last->size, size);
        log_trace("\n Function allocate_block exited (NULL return)");
		return NULL;
	}
}

//We search for free blocks
/** @fn  struct Header *find_free_block(struct Header **last, size_t size)
 * @brief finds free blocks from the linked list of blocks in the memory
 * @detail  iterates through the linked list to find a block of required size that is free
 * @param  struct Header **last - pointer to the heap
 * @param  size_t size - size of the block 
 * @return returns a free block if available
 *         returns null if unavailable
 */
struct Header *find_free_block(struct Header **last, size_t size)
{
    log_trace("\n[find_free_block] Requested size = %x", (unsigned int)size);

    struct Header *current = global_base;

    if (!current) {
        log_debug("\n[find_free_block] Heap is empty (global_base = NULL)");
        return NULL;
    }

    log_debug("\n[find_free_block] Starting search at global_base = %x", current);

    while (current) {
        log_debug("\n[find_free_block] Visiting block @ %x", current);
        log_debug("            available size = %x, free = %d",
                  (unsigned int)current->size, current->free);

        if (current->free && current->size >= size) {
            log_debug("\n[find_free_block] Suitable block found for this request %x (size=%x)", 
                      current, (unsigned int)current->size);
            *last = current;
            return current;
        }

        *last = current;
        current = current->next;
    }

    log_debug("\n[find_free_block] No suitable block found for this request %x size is too large to handle by heap, returning NULL", (unsigned int)size);
    return NULL;
}

//Creating a new block
/** @fn struct Header* request_heap()
 * @brief  requests memory from the heap
 * @detail  this function requests memory from the heap using the brk function
 * @return returns a pointer to the allocated heap
 *         returns NULL if heap is unable to be allocated
 */
struct Header* request_heap()
{
	log_debug("\n[request_heap] Called");
	struct Header *block;

	block = m_sbrk(0);
log_debug("\n[request_heap] Current program break (before allocation): %x", block);
	void *request = m_sbrk(HEAP_SIZE);
    log_debug("\n	[request_heap] Requested %d bytes, returned start address: %x", HEAP_SIZE, request);
	//if((void*)block == request); // Not thread safe.
	block=request;

	log_debug("\nInitial Heap start address =%x",block);

	if (request == (void*) -1) {
		log_error("\nNo space left to allocate memory");
		return NULL; // sbrk failed.
	}
	block->size = HEAP_SIZE;
	block->next = NULL;
	block->free = 1;
 log_debug("\n [request_heap] Block assigned successfully at %x", block);

	return block;
}
/** @fn  struct Header *get_block_ptr(void *ptr)
 * @brief function to get block pointer
 * @detail  function returns the pointer to the block
 * @param void* ptr - pointer to the block
 * @return returns pointer to the block
 */
struct Header *get_block_ptr(void *ptr)
{
	printf("\n get_block_ptr called %x", (struct Header*)ptr - 1);
  return (struct Header*)ptr - 1;
}

//malloc function to allocate space
/** @fn  void *malloc(size_t size)
 * @brief  this function is used to dynamically allocate memory
 * @detail  when this function is called memory is allocated in the heap during runtime
 * @param size_t size - size of the block to be allocated
 * @return  returns a pointer to the assigned block
 *          returns NULL if allocation fails
 */
void *malloc(size_t size)
{
	struct Header *block;

	if (size <= 0) {
		log_error("\n requested size %d is invalid, returning NULL", size);
        return NULL;
	}

	log_info("\n global_base: %x",global_base);

	//if(global_base==0x00000000)
	if (global_base == NULL)
	{
		// First call. global_base is empty
		log_debug("\n Requesting block");

		block = request_heap();

		log_debug("\n block=%x",block);

		if (!block)
		{
			return NULL;
		}
		global_base = block;
			log_info("\n modified global_base: %x",global_base);
	}

	struct Header *last = global_base;

	block = find_free_block(&last, size);

	if(!block)
	{
		log_error("\n No free blocks");// what if to extend heap region
		return NULL;
	}

	log_debug("\n Block = %x Block Size = %d Size = %d",block,block->size,size);

	if (block->size>size)
	{
		// Failed to find free block.
		block = allocate_block(last,size);

		if (!block)
		{
			return NULL;
		}
	}
	else if(block->size==size)
	{
		// Found free block
		log_debug("\n	Found free block of same size");
		block->free = 0;
	}

  return(block+1);
}
//calloc function to allocate space
/** @fn  void *calloc(size_t nmemb, size_t size)
 * @brief  this function is used to dynamically allocate memory for an array
 * @detail  when this function is called memory is allocated and initialized to 0 in the heap during runtime
 * @param size_t nmemb - number of elements
 * @param size_t size - size of each element
 * @return  returns a pointer to the assigned block
 *          returns NULL if allocation fails
 */

void *calloc(size_t nmemb, size_t size)
{
    size_t total_size = nmemb * size;
    void *ptr = malloc(total_size);

    if (!ptr) {
        return NULL; // malloc failed
    }

    // Zero initialize the allocated memory
    memset(ptr, 0, total_size);

    return ptr;
}
//realloc function to allocate space
/** @fn  void *realloc(void *ptr, size_t size)
 * @brief  this function is used to dynamically reallocate memory
 * @detail  when this function is called memory is reallocated in the heap during runtime
 * @param void *ptr - pointer to the memory block to be reallocated
 * @param size_t size - new size of the block
 * @return  returns a pointer to the assigned block
 *          returns NULL if allocation fails
 */
void *realloc(void *ptr, size_t size)
{
	if (ptr == NULL)
	{
		// Equivalent to malloc when ptr is NULL
		printf("\n[realloc] NULL pointer provided, behaving like mallocfor size %d", size);
		return malloc(size);
	}

	if (size == 0)
	{
		// Equivalent to free when size = 0
		printf("\n[realloc] Size 0 provided, behaving like free");
		free(ptr);
		return NULL;
	}

	// Get the block header for this ptr
	struct Header *block_ptr = get_block_ptr(ptr);

	/* If block is already large enough → just reuse it
	   same block size copied and shrink its size and leftover is added to free list */
	printf("\n[realloc] Current block %x of size %d, requested size %d", ptr, block_ptr->size, size);
	if (block_ptr->size == size)
	{
		// Exact size → no split needed, reuse as-it is
		log_debug("\n[realloc] Requested size equal to current block size (%d), reusing without split", size);
		return ptr;
	}
	else if (block_ptr->size > size)
	{
		log_debug("\n[realloc] Reusing existing block %x of size %d", ptr, block_ptr->size);
		size_t leftover = block_ptr->size - size - sizeof(struct Header);
		/*If leftover space is too small to form a usable block (header + some data), we do not split → we just keep it inside the allocated block.If it’s large enough, we split and add the remainder into the free list using your add_to_free_list() helper.*/
		if (leftover >= MIN_SPLIT)
		{
			// Enough room to split → create a new free block
			struct Header *new_block = (struct Header *)((char *)block_ptr + sizeof(struct Header) + size);

			new_block->size = leftover;
			new_block->free = 1;

			// Adjust old block size
			block_ptr->size = size;

			// Add the new block to the free list
			add_to_free_list(new_block);

			log_debug("\n[realloc] Shrink block: kept %d, released %d back to free list and free list starting at %x",
					  block_ptr->size, new_block->size, new_block);
		}
		else
		{
			// Too small leftover → keep wasted inside allocated block
			log_debug("\n[realloc] Shrink skipped (leftover %d too small to split)",
					  leftover);
		}

		return ptr; // Return same pointer
	}
	// Otherwise, allocate a new block means requesting a larger size than previously allocated
	void *new_ptr = malloc(size);
	if (!new_ptr)
	{
		log_error("\n[realloc] Failed to allocate new block of size %d", size);
		return NULL;
	}
	// Copy old data into the new block (only as much as fits)
	memcpy(new_ptr, ptr, block_ptr->size);
	// Free the old block
	free(ptr);
	log_debug("\n[realloc] Moved data from %x to new block %x, old size=%d, new size=%d",
			  ptr, new_ptr, block_ptr->size, size);
	return new_ptr;
}

//free to free the memory allocated by malloc
/** @fn  void free(void *ptr)
 * @brief frees the memory assigned by malloc
 * @detail  frees the memory assigned by malloc and when freed this memory is added back to the list to be reused
 * @param void *ptr - pointer to the memory assigned by malloc
 */
void free(void *ptr)
{
	if(!ptr)
	{
		log_error("\n Wrong value passed to free,free on null ptr invoked");
		return;
	}
	struct Header *block_ptr = get_block_ptr(ptr);
	if (block_ptr->free)
	{ // double free check
		log_error("\n free(): Double free detected at %x thats already freed one", ptr);
		return;
	}
	// if(block_ptr->free==0)
	block_ptr->free = 1;
	log_debug("\n %x is freed", block_ptr);
}

// Add a block to the free list (simply insert at the beginning)
/**@fn  void add_to_free_list(struct Header *block)
 * @brief  this function is used to add free space to the free list
 * @details  when this function is called memory is added to the free list
* @param struct Header *block - pointer to the block to be added to the free list

 */
void add_to_free_list(struct Header *block) {
    if (!block)
        return;

    block->free = 1;         // Mark as free
    block->next = free_list; // Insert at head
    free_list = block;

    // Optional debug log
    log_debug("\n[add_to_free_list] Block %x added to free list, size=%d", block, block->size);
}
