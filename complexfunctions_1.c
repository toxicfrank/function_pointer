#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_name - prototype function that prints given name
 * @name: pointer to a string containing name
 * @f: pointer to a function to be called on name
 */
void print_name(char *name, void (*f)(char *))
{
	char *name_copy = NULL;
	int name_len = strlen(name);

/*Allocating memory for a copy of the name string*/
	name_copy = malloc(sizeof(char) * (name_len + 1));

/*checking if memory allocation was successful*/
	if (name_copy == NULL)
	{
		printf("Error\n");
		return;
	}

/*When successfull copy the name string to the newly allocated memory*/
	strcpy(name_copy, name);

/*Call the function pointer*/
	f(name_copy);

/*Freeing the memory*/
	free(name_copy);
}
/**
 * print_to_console - function that prints name to console
 * @name: pointer to string containin name
 * Return: void
 */
void print_to_console(char *name)
{
	printf("Name is %s\n", name);
}
/**
 * main - calls all the functions above
 * Return: always 0
 */
int main(void)
{
	char *name = "Frank";

	print_name(name, &print_to_console);

	return (0);
}