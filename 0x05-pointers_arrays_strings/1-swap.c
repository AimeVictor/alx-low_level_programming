#include "main.h"
/**
*swap_int -  swaps the values of two integers
*@a: checkes integer
*@b: checks integer
*Return: Always 0 (sucess)
*/

void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
