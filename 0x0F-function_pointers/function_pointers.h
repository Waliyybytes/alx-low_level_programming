#ifndef F_POINTERS_H
#define F_POINTERS_H

void print_name(char *name, void (*f)(char *));

int _putchar(int c);

void array_iterator(int *array, size_t size, void (*action)(int));

#endif
