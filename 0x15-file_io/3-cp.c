#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);
void print_error_and_exit(int code, const char *message, const char *file);

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
		print_error_and_exit(100, "Can't close fd", "");
}

/**
 * print_error_and_exit - Prints an error message to stderr and exits.
 * @code: The exit code.
 * @message: The error message.
 * @file: The file name.
 */
void print_error_and_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, file);
	exit(code);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char buffer[1024];

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to", "");

	from = open(argv[1], O_RDONLY);
	if (from == -1)
		print_error_and_exit(98, "Can't read from file", argv[1]);

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (to == -1)
		print_error_and_exit(99, "Can't write to", argv[2]);

	while ((r = read(from, buffer, 1024)) > 0)
	{
		w = write(to, buffer, r);
		if (w == -1)
			print_error_and_exit(99, "Can't write to", argv[2]);
	}

	if (r == -1)
		print_error_and_exit(98, "Can't read from file", argv[1]);

	close_file(from);
	close_file(to);

	return (0);
}
