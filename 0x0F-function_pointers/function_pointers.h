#ifndef FUNC_PTR
#define FUNC_PTR

#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif 
