#include "function_pointers.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_name - function that prints the name
 * @name: function parameter that contains the string
 * @f:function parameter
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
/*This will be used for memory allocation*/
	char *name_copy = NULL;

/*Counting the length of the string name*/
	int name_len = strlen(name);

/*Allocating the memory*/
	name_copy = malloc(sizeof(char) * (name_len + 1));

/*Checking if the memory has been allocated*/
	if (name_copy == NULL)
	{
		printf("Error\n");
		return;
	}
/*Copying the string name to name_copy*/
	strcpy(name_copy, name);

/*Calling the function pointer*/
	f(name_copy);

/*Freeing the memory*/
	free(name_copy);
}
