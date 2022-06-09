#include "main.h"

/**
*_isupper - checks for uppercase character
*@c: checks for a character
*Return: 1 for uppercase character, otherwise return 0
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
