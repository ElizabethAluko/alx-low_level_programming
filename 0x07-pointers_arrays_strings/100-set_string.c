#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer.
 * @to: character that pointer points to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
