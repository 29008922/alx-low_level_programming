#include "main.h"

/**
* _isupper - a function that checks uppercase character
*@c: An input character
* return: 1 if c is uppercase or 0 otherwise
*/

int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;

for (; uppercase <= "z", uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
