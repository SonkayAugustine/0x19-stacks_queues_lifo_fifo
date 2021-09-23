#include "monty.h"
/**
 * usage_error - Prints a usage error message.
 *
 * Return: EXIT_FAILURE.
 */
int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}
/**
 * f_open_error - Prints a file opening error message.
 * @filename: Name of file failed to open
 *
 * Return: EXIT_FAILURE.
 */
int f_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}
/**
 * malloc_error - Prints a malloc error message.
 *
 * Return: EXIT_FAILURE
 */
int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}
/**
 * unknown_op_error - Prints unknown instruction error messages.
 * @opcode: Opcode where error occurred.
 * @line_number: Line number in Monty bytecodes file where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
		line_number, opcode);
	return (EXIT_FAILURE);
}

/**
 * no_int_error - Prints an error message for invalid monty_push argument.
 * @line_number: Line number in Monty bytecodes file where error occurred.
 *
 * Return: EXIT_FAILURE
 */
int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
