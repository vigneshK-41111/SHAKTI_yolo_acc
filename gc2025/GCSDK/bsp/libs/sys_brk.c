/***************************************************************************
 * Project               	: shakti devt board
 * Name of the file	        : sys_brk.c
 * Brief Description of file   	: System BRK
 * Name of Author    	        : Abhinav Ramnath
 * Email ID                     : abhinavramnath13@gmail.com

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
@file sys_brk.c
@brief System BRK
@detail This file is used to the set the brk which specifies the start of the heap and the end of the text section.
*/ 

#include "platform.h"

extern char _end[];                /* _end is set in the linker file */
extern char _heap_end[];	   /* _heap_end is set in the linker file */

char *heap_ptr=(char *)&_end;// Initializes the heap pointer to the end of the text section
char *end_of_heap=(char *)&_heap_end;// Initializes the end of the heap to the value set in the linker file

/* OS LESS IMPLEMENTATION OF SBRK
 * sbrk -- changes heap size. Get nbytes more RAM.
 *         We just increment a pointer in what's
 *         left of memory on the board.
 */

/** @fn  char * m_sbrk (nbytes)
 * @brief this function is used to allocate the heap
 * @detail this function is used to allocate the heap and returns the end of the text section or start of heap  
 * @param int nbytes - specifies the size of the heap 
 * @return  returns a pointer to the start of the heap
 */
char * m_sbrk (nbytes)
	int nbytes;
{
	char *base;

	log_debug("\nHeap pointer is %x",heap_ptr);//heap start
	log_debug("\nEnd of heap is %x",end_of_heap);//heap end
    log_debug("\n[m_sbrk] Requested bytes: %x", nbytes);
    log_debug("\n[m_sbrk] Heap starts at %x", &_end);
    log_debug("\n[m_sbrk] Heap max (end_of_heap): %x", end_of_heap);
	if(!heap_ptr)
	{
		log_debug("\n[m_sbrk] heap_ptr was NULL, re-initializing to _end");
		heap_ptr = (char *)&_end;
}
	base = heap_ptr;
	 log_debug("\n[m_sbrk] Base (old break) = %x", base);

	if (heap_ptr + nbytes > end_of_heap) {
        log_error("\n[m_sbrk]Memory allocation error: Insufficient Space");
        log_error("\n[m_sbrk] ERROR: Out of memory! requied size is larger than the heap available size heap_ptr=%x end_of_heap=%x req=%x avail=%x",
                  heap_ptr, end_of_heap, nbytes, end_of_heap - heap_ptr);
        return (char *)-1;   // return error
    }

	heap_ptr += nbytes;
	 log_debug("\n[m_sbrk] New heap_ptr after increment = %x", heap_ptr);

	log_debug("\n[m_sbrk] New System BRK: %x %x %x",base,heap_ptr,end_of_heap);

	if(heap_ptr>end_of_heap)
	{
		log_error("\nMemory allocation error: Insufficient Space");
		  log_error("\n[m_sbrk] ERROR: Out of memory! heap_ptr=%x exceeds end_of_heap=%x",
                  heap_ptr, end_of_heap);
		return -1;
	}
	  log_debug("\n[m_sbrk] Allocation successful. Returning base=%x", base);
	return base;
}
