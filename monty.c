#include "monty.h"

/**
 * main - the interpreter for the monty language
 * @argc:count for arguments in the line
 * @argv:the vector argument
 * Return:0
 */

int main(int argc, char **argv)
{
	FILE *file_to_read;
	int value;
	if (argc > 2)
	{
		printf("USAGE: monty language file error\n");
		exit(EXIT_FAILURE);
	}

	file_to_read = fopen(argv[1], "r");
	if (!file_to_read)
	{
		printf("Error opening file");
		exit(EXIT_FAILURE);
	}

	printf("File read sucess");
	value = read_file(file_to_read);

	if (value == EXIT_FAILURE)
	{
		exit(EXIT_FAILURE);
	}
	else
		exit(EXIT_SUCCESS);
}
