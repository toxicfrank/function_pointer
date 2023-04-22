#include <stdio.h>
/**
 * fun1 - prototype
 * fun2 - prototype
 * Return: void
*/
void fun1()
{
	printf("Fun1\n");
}
void fun2()
{
	printf("Fun2\n");
}

/**
 * wrapper - function that recieves a simple function
 * and calls the functions above
 * Return: void
 */
void wrapper(void (*fun)())
{
	fun();
}
/**
 * main - calls the functions above
 * Return: always 0
 */
int main (void)
{
	wrapper(fun1);
	wrapper(fun2);
	return (0);
}
