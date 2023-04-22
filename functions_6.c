#include <stdio.h>
/**
 * divide - function that divides a using b
 * @a: integer 1
 * @b: integer 2
 * Return: void
 */
void divide(int a, int b)
{
    printf("%d\n", a / b);
}
/**
 * main - calls the functions
 * Return: always 0
 */
int main(void)
{
    int a = 14, b = 7;
    void (*divide_ptr)(int, int) = &divide;

    (*divide_ptr)(a, b);
    return (0);
}
