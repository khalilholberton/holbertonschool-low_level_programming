#include "holberton.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: const char type  pointer to file to be read
 * @letters:  size_t type number of letters it could read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fdw;
ssize_t fdr;
char *p;
int fd;

if (filename == NULL)
return (0);
p = malloc(letters * sizeof(char));
if (p == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
fdr = read(fd, p, letters);
if (fdr == -1)
return (0);
*(p + fdr) = '\0';
fdw = write(STDOUT_FILENO, p, fdr);
if (fdw == -1 || fdw != fdr)
return (0);
close(fd);
return (fdw);
}
