/**
 * Memory Access: program that declares a variable of each basic C type and assigns an arbitrary value.
 *				  Views how each data type is stored in memory
 * Derek Hessinger
 * 9/12/24
 */

#include <stdio.h>
#include <stdlib.h>
        
/* This function declares variables of different types and 
   loops through their memory contents to see how they are stored.
 */ 
int main (int arg, char *argv[]) {
					
  //char
  char a = 1;
  
  // create pointer to examine char
  unsigned char *ptr0;
  ptr0 = (unsigned char *)&(a);
					
  // loop through memory content of char
  for(int i=0; i<sizeof(char); i++) {
	printf("%d: %02X\n", i, ptr0[i]);
  }
  // returns:
  /**
  0: 01
  **/
    
  //int
  int b = 2;
  
  // create pointer to examine int
  unsigned char *ptr1;
  ptr1 = (unsigned char *)&(b);
  
  // loop through memory content of int
  for(int i=0; i<sizeof(b); i++) {
	printf("%d: %02X\n", i, ptr1[i]);
  }
  //returns:
  /**
  0: 02
  1: 00
  2: 00
  3: 00
  **/
  
  //short
  short c = 3;
  
  // create pointer to examine short
  unsigned char *ptr2;
  ptr2 = (unsigned char *)&(c);
  
  // loop through memory content of short
  for(int i=0; i<sizeof(c); i++) {
	printf("%d: %02X\n", i, ptr2[i]);
  }
  //returns:
  /**
  0: 03
  1: 00
  **/
  
  //float
  float d = 4;
  
  // create pointer to examine float
  unsigned char *ptr3;
  ptr3 = (unsigned char *)&(d);
  
  // loop through memory content of float
  for(int i=0; i<sizeof(d); i++) {
	printf("%d: %02X\n", i, ptr3[i]);
  }
  //returns:
  /**
	0: 00
	1: 00
	2: 80	
	3: 40
  **/
  
  //double
  double e = 5;
  
  // create pointer to examine double
  unsigned char *ptr4;
  ptr4 = (unsigned char *)&(e);
  
  // loop through memory content of double
  for(int i=0; i<sizeof(e); i++) {
	printf("%d: %02X\n", i, ptr4[i]);
  }
  //returns:
  /**
	0: 00
	1: 00
	2: 00
	3: 00
	4: 00
	5: 00
	6: 14
	7: 40
  **/
  
  //long
  long f = 6;
  
  // create pointer to examine long
  unsigned char *ptr5;
  ptr5 = (unsigned char *)&(f);
  
  // loop through memory content of long
  for(int i=0; i<sizeof(f); i++) {
	printf("%d: %02X\n", i, ptr5[i]);
  }
  //returns:
  /**
	0: 06
	1: 00
	2: 00
	3: 00
	4: 00
	5: 00
	6: 00
	7: 00
  **/
} 
