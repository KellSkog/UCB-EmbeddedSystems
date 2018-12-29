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
#include <string.h>//memcpy
#include <stdlib.h>//qsort

/* Add other Implementation File Code Here */
int cmpDecending(const void *p, const void *q) { 
    return *(const unsigned char *)q - *(const unsigned char *)p;
}
void print_array(unsigned char * array, int len) {
	int lastCharIndex = len -1, i = 0;
	for(; i < lastCharIndex; i++) {
		printf("%x, ", array[i]);
	}
	printf("%x\n", array[i]);
}
void sort_array(unsigned char * array, int len) {
	qsort((void*)array, len, sizeof array[0], cmpDecending);

}
///Return 0 if no median exist
unsigned char find_median(const unsigned char * array, int len) {
	if((array == NULL) || (len < 2)) return 0;
	unsigned char copy[len];
	memcpy(copy, array, len);
	sort_array(copy, len);
	if(len == 2) {//median is between the two values
		return (copy[0] + copy[1]) / 2;
	} else if(len%2 == 0) {//median is between two values
		int afterMid = len/2;
		return (copy[afterMid] + copy[afterMid - 1]) / 2;
	} else {
		return copy[len/2];
	}
}
unsigned char find_mean(unsigned char * array, int len) {
	unsigned int sum = 0;
	for(int i = 0; i < len; i++) {
		sum += array[i];
	}
	return (unsigned char) (sum / len);
}
unsigned char find_maximum(unsigned char * array, int len){
	unsigned char max = 0;
	for(int i = 0; i < len; i++) {
		if(array[i] > max) {max = array[i];}
	}
	return max;
}
unsigned char find_minimum(unsigned char * array, int len) {
	unsigned char min = 255;
	for(int i = 0; i < len; i++) {
		if(array[i] < min) {min = array[i];}
	}
	return min;
}
