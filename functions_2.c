#include <stdio.h>
/**
 * fun - prototype
 * @a: integer
 * Return: always 0
 */
void fun(int a)
{
	printf("Value of a is %d\n", a);
}
/**
 * main - calls the fun(function)
 * Return: 0
 */
int main(void)
{
	int a = 10;
	/*Removing & operator before tje fun function*/
	void (*fun_ptr)(int) = fun;
	/*Hence we call the function with the line of code below*/
	fun_ptr (a);

	return (0);
}
