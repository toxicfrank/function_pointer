#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_name - function that prints the name
 * @name: function parameter that contains the name string
 * @f: function parameter that is a function to a pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
/*To be used to store the name string and contain the allocated memory*/
	char *name_copy = NULL;

/*Counting the lenght of the string so as to allocate the memory*/
	int name_len = strlen(name);

/*Allocating the memory*/
	name_copy = malloc(sizeof(char) * (name_len + 1));

/*chacking if the memory has been allocated*/
	if (name_copy == NULL)
	{
		printf("Error\n");
		return;
	}
	strcpy(name_copy, name);
	f(name_copy);

	free(name_copy);
}
/**
 * print_to_console - function that prints the text in printf
 * @name: function parameter that contains the name string
 * Return: void
 */
void print_to_console(char *name)
{
	printf("Name is %s", name);
}
/**
 * main - calls the above functions
 * Return: always 0
 */
int main(void)
{
	char name[] = "Frank";

	print_name(name, &print_to_console);
	return (0);
}