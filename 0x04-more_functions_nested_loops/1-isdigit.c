#include "main.h"
/**
*_isdigit - checks for digit 0-9
*@c: checks an integer
*Return: 1 if c is a digit, otherwise return 0
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
