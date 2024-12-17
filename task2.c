/**
 * Where values are on the stack
 *
 * Derek Hessinger
 * 9/11/24
 */

#include <stdio.h>
#include <stdlib.h>

/* A
 */ 
int main (int arg, char *argv[]) {
					
  //establish variables
  
  //char
  char a = 1;
  //short
  //short s = 5;
  short b = 2;
  //int
  int c = 3;
  //long
  //long l = 123456789;
  long d = 4;
  //float
  //float f = 0.1;
  float e = 5;
  //double
  //double d = 0.222222;
  double f = 6;
  
  char g = 7;
  //short
  //short s = 5;
  short h = 8;
  //int
  int i = 9;
  //long
  //long l = 123456789;
  long j = 10;
  //float
  //float f = 0.1;
  float k = 11;
  //double
  //double d = 0.222222;
  double l = 12;
  
  // pointer
  unsigned char *ptr;
  ptr = (unsigned char *)&ptr;
  for(int i=0; i<100; i++) {
	printf("%d: %02X\n", i, ptr[i]);
  }
}  