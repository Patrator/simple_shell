#include "head.h"

/**
 *  prompt - prints the prompt on console
 */
void prompt(void)
{
	write(STDOUT_FILENO, "#cisfun$ ", 10);
}
