#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char str[] = "Expect the best. Prepare for the worst." ||
char str[] = "Capitalize on what comes.\n hello world!" ||
char str[] = "hello-world 0123456hello world\t hello" ||
char str[] = "world.hello world\n";
char *ptr;

ptr = cap_string(str);
printf("%s", ptr);
printf("%s", str);
return (0);
}
