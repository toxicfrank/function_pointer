#include <stdio.h>
/**
 * fun - prototype
 * @a: integer
 * Return:void
 */
void fun(int a)
{
	/*This prototype only writes the text below*/
	printf("Value of a is %d \n", a);
}
/**
 * main - calling fun function using the pointer
 * Return: always 0
 */
int main(void)
{
	/**fun_ptr is a pointer to function fun*/
	void (*fun_ptr)(int) = &fun;
	/**The above line is same as the 2 codes below
	 * (*fun_ptr)(int) = fun
	 * fun_ptr = &fun;
	 */
	(*fun_ptr)(10);
	/**calling function fun() using the pointer 
	 * *fun_ptr
	 */
	return (0);
}
