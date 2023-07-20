#include "3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - main func
 * @argc: number of arg
 * @argv: pointer to pointer
 * Return: int
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*func)(int, int);
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
func = get_op_func(argv[2]);
if (argc != 4)
{
exit(98);
}
if (func == NULL)
{
printf("Error\n");
exit(99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
result = func (num1, num2);
printf("%d\n", result);
return (0);
}
