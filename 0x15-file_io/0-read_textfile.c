#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: pointer to text in a file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, fread, fwrite;
	char *tot_size;

	tot_size = malloc(sizeof(char) * letters);
	if (tot_size == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	fread = read(file, tot_size, letters);
	if (fread == -1)
		return (0);
	fwrite = write(STDOUT_FILENO, tot_size, fread);
	if (fwrite == -1)
		return (0);
	close(file);
	free(tot_size);
	return (fwrite);
}
