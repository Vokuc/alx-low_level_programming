#include "main.h"

/**
 * main - copies the contend of a file to another file
 * @argc: number of args passed
 * @argv: doublle pointer
 * Return: actual no of letter is could read and print
 */
int main(int argc, char **argv)
{
	int file1, file2, n;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file from file to \n");
		exit(97);
	}
	file1 = open(argv[1], 0_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((n = read(file1, buf, 1024)) > 0)
	{
		if (write(file2, buf, n) != n || file2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Catn't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", file1);
		exit(100);
	}
	if (close(file2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", file2);
		exit(100);
	}
	return (0);
}
