#include "main.h"


/**
 * get_sigint - func to handle the crtl + c call in prompt
 * @sig: Signal handler
 *
 * Return: void
 */

void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
