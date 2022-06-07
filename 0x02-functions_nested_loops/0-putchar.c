#include "main.h"
#include <unistd.h>
/**
 * Main - Entry point
 * Description prints _putchar followed by a new line
 * Return 0 - always
 */

int _putchar(char c) 
{
	return (write(1, &c, 1));
}

