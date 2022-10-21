#include "main.h"

<<<<<<< HEAD


/**

 * _isupper - A function that checks for uppercase character.

 * @c: An input character

 * Return: 1 if c is uppercase or 0 otherwise

 */

int _isupper(int c)

{

char uppercase = A;

int isupper = 0;



for (; uppercase <= Z; uppercase++)

{

if (c == uppercase)

{

isupper = 1;

break;

}

}



return (isupper);

=======
/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
>>>>>>> 60846a666ba450c3480bf17dd7833a89eba99534
}
