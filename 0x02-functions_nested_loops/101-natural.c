#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int sum = 0;

	for(i = 1; i < 1024; i++)
	{
		if((i % 3 == 0) || (i % 5 == 0))
		{
		sum = sum + i;
		}
		printf("%i\n", sum);

	}
	printf("%i\n", sum);
	return 0;
}
