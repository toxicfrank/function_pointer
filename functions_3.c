#include <stdio.h>
/**
 * add - adds two integers together
 * @a: integer 1
 * @b: integer 2
 * Return: void
 */
void add(int a, int b)
{
    printf("Addition is %d\n", a + b);
}
/**
 * subtract - subtracts a and b
 * @a: integer 1
 * @b: integer 2
 * Return: void
 */
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a - b);
}
/**
 * multiply - multiplies a and b
 * @a: integer 1
 * @b: integer 2
 * Return: void
 */
void multiply(int a, int b)
{
    printf("Multiply is %d\n", a * b);
}
/**
 * main - calls the functions above
 * Return: always 0
 */
int main(void)
{
    /*fun_ptr_arr[] is an array of function pointer*/
    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
    unsigned int ch, a = 15, b = 10;

    printf("Enter 0 to add 1 to subtract and 2 to multiply\n");
    scanf("%d", &ch);

    if (ch > 2)
        return (0);
    (*fun_ptr_arr[ch])(a, b);
    return 0;
}
