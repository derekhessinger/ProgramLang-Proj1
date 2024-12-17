/**
 * Uses excessive amounts of memory
 *
 * Derek Hessinger
 * 9/11/24
 */

#include <stdio.h>
#include <stdlib.h>

/* 
This program assigns lots of pointers to memory locations,
causing the program to use up lots of memory if line 21 is
commented out
 */ 
int main (int arg, char *argv[]) {
	for(long i=0; i<100000000000; i++) {
		unsigned char *ptr;
		ptr = (unsigned char *) malloc(sizeof(unsigned char));
		
		// Comment out line below to use up lots of memory
		free(ptr);
  }
}