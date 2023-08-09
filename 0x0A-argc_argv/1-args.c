#include <stdio.h>

/**
 * main - print numbers of arguments passed
 * @argc: number of commands
 * @argv: pointer
 * Return: 0- sucess, non-zero-fail.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
