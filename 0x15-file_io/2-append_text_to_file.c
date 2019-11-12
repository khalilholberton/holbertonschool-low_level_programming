#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer to filename to append
 * @text_content: tsxt  of file
 * Return: integer type 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{

int fd;
int fw;
size_t i = 0;

if (filename == NULL)
return (-1);
fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
return (-1);
if (text_content == NULL)
return (1);
for (i = 0 ; text_content[i]; i++)
{}
fw = write(fd, text_content, i);
close(fd);
if (fw == -1)
return (-1);
return (1);
}
