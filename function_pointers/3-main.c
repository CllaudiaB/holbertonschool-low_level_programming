#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[])
{
	int n1, n2, res = 0;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	s = argv[2];
	if (argv[2][1] != '\0' || get_op_func(s) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = get_op_func(s)(n1, n2);
	printf("%d\n", res);

	return (0);
}
