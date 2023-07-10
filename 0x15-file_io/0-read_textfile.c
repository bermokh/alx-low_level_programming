#include "main.h"
#include <stdlib.h>
/**
*read_textfile - function that reads a text file and prints it
*to the POSIX standard output.
*@filename: the txt of file
*@letters: number of lettres to rezda
*Return: 0 or Null
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
ssize_t fd;
ssize_t wr;
ssize_t t;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, lettres);
wr = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (wr);
}
