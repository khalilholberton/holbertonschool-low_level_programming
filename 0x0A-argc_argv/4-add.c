#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code for Holberton School students.
 * @argc : is int type
 * @argv : is char type
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i = 0, j = 0, x = 0;

if (argc <= 1)
{
printf("0");
return (0);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != 0; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}

x += atoi(argv[i]);
}
printf("%d\n", x);
return (0);
}
