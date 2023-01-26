#include "so_long.h"

int	toupperv2(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	if (c >= '0' && c <= '9')
	{
		c = c;
	}
	return (c);
}