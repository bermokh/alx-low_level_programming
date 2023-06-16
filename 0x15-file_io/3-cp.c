#include "main.h"
char *creat_buff(char *file);
void close_file(int fp);
/**
*creat_buff - make some bytes for bufer
*@file: the name of using file
*Return: a poitre to a lloctaed buffer
*/
char *creat_buff(char *file)
{
char *buff;
buff = malloc(sizeof(char) * 1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO,
"ERROR: Can't write to %s\n", file);
exit(99);
}
return (buff);
}

/**
*close_file - close current file
*@fp: the current file
*/
void close_file(int fp)
{
int j;
j = close(fp);
if (j == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fp %d\n", fp);
exit(100);
}
}
/**
*main - copy the content of file
*@argc: the number of elemnets
*@argv: an array of pointer
*Return: 0 on success
*/
int main(int argc, char *argv[])
{
int a, b, c, m;
char *buff;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buff = creat_buff(argv[2]);
a = open(argv[1], O_RDONLY);
c = read(a, buff, 1024);
b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (a == -1 || c == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}
m = write(b, buff, c);
if (b == -1 || m == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}
c = read(a, buff, 1024);
b = open(argv[2], O_WRONLY | O_APPEND);
} while (c > 0);
free(buff);
close_file(a);
close_file(b);
return (0);
}
