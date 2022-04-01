#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints the min num of coins to make change for an amount of money
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */

int main(int argc, char *argv[])
{
int count = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
else if (atoi(argv[1]) < 0)
{
printf("%d\n", 0);
return (0);
}
count = coin_count(argv, count);
printf("%d\n", count);
return (0);
}
