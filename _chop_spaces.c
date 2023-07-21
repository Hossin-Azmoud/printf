#include "main.h"

/**
* _chop_spaces - a function that increments the index until there is no spaces left. 
* @s: pointer to string to be chopped.
* @idx: current index.
* Return: Void
*/
int _chop_spaces(const char *s, int idx)
{
	while (*(s + idx) == ' ')
	{
		idx++;
	}

	return idx;
}
