#include "monty.h"

args_t args;

/**
 * main - purpose
 * @argc: number arguments
 * @argv: double pointer argc
 * Return: exit, exit
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	args.argv = argv;
	args.counter = 0;
	args.line = NULL;
	args.stack = NULL;
	args.file = NULL;
	args.order = 1;
	monty();
	free_dlistint(args.stack);
	return (EXIT_SUCCESS);
}
