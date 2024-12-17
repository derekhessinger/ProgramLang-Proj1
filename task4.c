/**
 * Creates a struct with various data types to view how they are 
 * organized in memory
 * Derek Hessinger
 * 9/11/24
 */

#include <stdio.h>
#include <stdlib.h>

// struct
struct s {

	// first trial
	/*
	char char1; // 1 byte
	short short1; // 2 bytes
	char char2; // 1 byte
	short short2; // 2 bytes
	char char3; // 1 byte
	*/
	// 7 bytes
	
	// second trial
	/*
	char char1; // 1 byte
	short short1; // 2 bytes
	int int1; // 4 bytes
	char char2; // 1 byte
	char char3; // 1 byte
	*/
	// 9 bytes
	
	// third trial
	
	char char1; // 1 byte
	char char2; // 1 byte
	int int1; // 4 bytes
	char char3; // 1 byte
	short short1; // 2 bytes
	
	// 9 bytes
};

/* 
The main program prints out the memory contents of the 
struct
 */ 
int main (int arg, char *argv[]) {
	// create instance of struct
	struct s myStruct;
	
	// initialize variables in struct
	
	// first trial
	/*
	myStruct.char1 = 1;
	myStruct.short1 = 2;
	myStruct.char2 = 3;
	myStruct.short2 = 4;
	myStruct.char3 = 5;
	*/
	
	// returns
	/*
	0: 01
	1: 00
	2: 02
	3: 00
	4: 03
	5: 98
	6: 04
	7: 00
	8: 05
	9: 9B
	*/
	
	// second trial
	/*
	myStruct.char1 = 1;
	myStruct.short1 = 2;
	myStruct.int1 = 3;
	myStruct.char2 = 4;
	myStruct.char3 = 5;
	*/
	
	// returns
	/*
	0: 01
	1: 00
	2: 02
	3: 00
	4: 03
	5: 00
	6: 00
	7: 00
	8: 04
	9: 05
	10: 77
	11: A1
	*/
	
	// third trial
	
	myStruct.char1 = 1;
	myStruct.char2 = 2;
	myStruct.int1 = 3;
	myStruct.char3 = 4;
	myStruct.short1 = 5;
	
	// returns
	/*
	0: 01
	1: 02
	2: 00
	3: 00
	4: 03
	5: 00
	6: 00
	7: 00
	8: 04
	9: 80
	10: 05
	11: 00
	*/
	
	// initialize pointer
	unsigned char *ptr;
	ptr = (unsigned char *)&myStruct;
	
	printf("size of: %zu\n", sizeof(myStruct));
	// loop through memory of struct
	for(int i=0; i<sizeof(myStruct); i++) {
		printf("%d: %02X\n", i, ptr[i]);
  }
}