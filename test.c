#include "stats.h"
#include <stdio.h>
#include <assert.h>



void test1(void) {
	unsigned char test[] = { 10, 12};
	unsigned char median = find_median(test, 2);
	printf("T1 Median %d\n", median);
	assert(median == 11);
}
void test2(void) {
	unsigned char test[] = { 10, 11, 12};
	unsigned char median = find_median(test, 3);
	printf("T2 Median %d\n", median);
	assert(median == 11);
}
void test3(void) {
	const int SIZE = 40;
	unsigned char test[] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
	unsigned char median = find_median(test, SIZE);
	printf("T3 Median %d\n", median);
	assert(median == 87);
}
void test4(void) {
	unsigned char test[] = { 1, 2, 3, 4, 5};
	unsigned char mean = find_mean(test, 5);
	printf("T4 Mean %d\n", mean);
	assert(mean == 3);
}
void test5(void) {
	unsigned char test[] = { 255, 255};
	unsigned char mean = find_mean(test, 2);
	printf("T5 Mean %d\n", mean);
	assert(mean == 255);
}
void test6(void) {
	unsigned char test[] = { 1, 2, 3, 4, 5};
	unsigned char max = find_maximum(test, 5);
	printf("T6 Maximum %d\n", max);
	assert(max == 5);
}
void test7(void) {
	unsigned char test[] = { 1, 2, 3, 4, 5};
	unsigned char min = find_minimum(test, 5);
	printf("T7 Minimum %d\n", min);
	assert(min == 1);
}
void main() {
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
}
