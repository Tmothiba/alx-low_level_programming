#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stddef.h>
typedef struct print_type
{
	char *type;
	void(*f)(va_list);
}print_type;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void printChar(va_list args);
void printInt(va_list args);
void printFloat(va_list args);
void printString(va_list args);
void print_all(const char * const format, ...);
#endif
