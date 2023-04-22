#include <stdio.h>
/**
 * numb - function that prints the required info
 * @num: function parameter
 * Return: void
 */
/*The code below is wrong*/
void numb(int *num)
{
/**Use the dereference the pointer using the * operator to
 * print its value correct way(....., *num)
 * num alone is just an address
*/
	printf("The number is %d\n", num);
}
/**
 */
int main(void)
{
	int a = 50;
/**
 * 'numb' function actually takes 'int' pointer as the
 * parameter
 */
	void (*ptr)(int *) = &numb;

/**
 * We should pass the address of the variable 'a' by using the
 * '&' operator
 */
	(*ptr)(a);
	return (0);
}
