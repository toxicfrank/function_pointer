#include <stdio.h>
/**
 * print_hello - functions that prints Hello then the name that
 * has been inputed
 * @name: function parameter to insert name
 * Return: always 0
 */
void print_hello(char *name)
{
/**We can't use '*name' because it will point the first
 * character in the string hence cannot print the whole name  
 */
    printf("Hello %s\n", name);
}
/**
 * main - calls the function above
 * Return: always 0
 */
int main(void)
{
    void (*ptr)(char *) = &print_hello;
    
    (*ptr)("Frank");

    return (0);
}
