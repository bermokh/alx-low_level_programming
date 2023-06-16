#include "main.h"
/**
*read_textfile - function that reads a text file and
*prints it to the POSIX standard output.
*@filename: the name of current file
*@letters: is the number of letters it should read and print
*Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t f;
ssize_t m;
ssize_t j;
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
j = read(f, buffer, letters);
m = write(STDOUT_FILENO, buffer, j);
free(buffer);
close(f);
return (m);
}
