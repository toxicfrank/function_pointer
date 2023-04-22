#include <stdio.h>
/**
 * print_hello - function that prints Hello
 * Returns: void
 */
void print_hello()
{
	printf("Hello");
}
/**
 * main - calls the function above
 * Return: always 0
 */
int main(void)
{
	void (*ptr)() = &print_hello;

	(*ptr)();
}
