#include <stdio.h>
/**
 * numb - prototype function
 * @num: function parameter that stores an integer
 * Return: void
 */
/*Using the correct format*/
void numb(int *num)
{
	printf("The number is %d.\n", *num);
}
/**
 * main - calls the function above
 * Return: always 0
 */
int main(void)
{
	int a = 50;

	void (*ptr)(int *) = &numb;

	(*ptr)(&a);

	return (0);
}