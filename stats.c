/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#include <stdio.h>




/* Add other Implementation File Code Here */

void print_array(unsigned char * array, int len) {
	int lastCharIndex = len -1, i = 0;
	for(; i < lastCharIndex; i++) {
		printf("%x, ", array[i]);
	}
	printf("%x\n", array[i]);
}
