#include "lists.h"

/**
 * before_main - function executed before main function
 * Return: no return.
 */

void __attribute__ ((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
