#include "stdio.h"
/**
 * main - prints number of arguments, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc,  char *argv[])
{
(void)argv;
int i;
for (i = 0; i < argc; i++)
{
printf("%d\n", argc);
}
return (0);
}
