#include "holberton.h"

/**
 * create_file - function that creates a file.
 * @filename: const char type  pointer to filename to be created
 * @text_content: text of file
 * Return: integer type  1 or -1
 */

int create_file(const char *filename, char *text_content)
{

int fd;
int fw;
size_t i = 0;

if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600 | S_IWUSR);
if (fd == -1)
return (-1);
if (text_content == NULL)
return (1);
while (text_content[i])
i++;
fw = write(fd, text_content, i);
close(fd);
if (fw == -1)
return (-1);
return (1);
}
