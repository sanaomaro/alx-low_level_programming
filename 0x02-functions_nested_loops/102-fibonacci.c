#include <stdio.h>
/**
 * main - compute and print fibonacci
 * Return: 0
 */
int main(void)
{
	long int i ,j ,k ,l;
	i = 1;
	j = 2;
	k = 3;
	printf("%ld, ", i);
	printf("%ld, ", j);
	for (l = 3; l < 50; l++)
	{
		printf("%ld, ", k);
		i = j;
		j = k;
		k = i + j;
	}
	printf("%ld\n", k);
return (0);

}
