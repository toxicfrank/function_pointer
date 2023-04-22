#include <stdio.h>
/**
 * 
 */
/*Using the correct format*/
void numb(int *num)
{
    printf("The number is %d.\n", *num);
}
/**
 */
int main(void)
{
    int a = 50;

    void (*ptr)(int *) = &numb;

    (*ptr)(&a);

    return (0);
}