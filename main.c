#include "monty.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - the entry point for Monty Interp
 *
 * @argc: the count of arguments passed to the program
 * @argv: pointer to an array of char pointers to arguments
 *
 * Return: (EXIT_SUCCESS) on success (EXIT_FAILURE) on error
 */
int main(int argc, char **argv)
{
	FILE *monty_fd = NULL;
	int exit_code = EXIT_SUCCESS;
	char **op_toks = NULL;

	if (argc != 2)
		return (usage_error());
	monty_fd = fopen(argv[1], "r");
	if (monty_fd == NULL)
		return (f_open_error(argv[1]));
	exit_code = run_monty(monty_fd);
	fclose(monty_fd);
	return (exit_code);
}
