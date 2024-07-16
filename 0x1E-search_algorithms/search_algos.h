#ifndef _SEARCH_ALG_H_
#define _SEARCH_ALG_H_
#include <stdio.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_current_array(int *array, size_t high, size_t low);
#endif
