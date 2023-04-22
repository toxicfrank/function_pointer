#include <stdio.h>
/**
 * add - function that adds two intergers
 * @a: first integer
 * @b: seconde integer
 * Return: integer
 */
int add (int a, int b)
{
    /*returns tha add of a and b*/
    return (a + b);
}
/**
 * main - calls the function above to perform the addition
 * task
 * Return: always 0
 */
int main(void)
{
    int i;
    int a = 10, b = 12;

    int (*p)(int, int) = &add;

    i = (*p)(a, b);

    printf("%d\n", i);
}
