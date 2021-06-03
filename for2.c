#include <stdio.h>

/* 
int main()
{
	int i; 
	for (i = 1; i < 10; i++)
	{
		printf("2x%d = %2d\n", i, i * 2); 
	}
	return 0; 
}
*/

#include <stdio.h>
int main()
{
	int i, j; 
	for(i = 2; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%dx%d = %d", i, j, i*j); 
		}
	}
}
© 2021 GitHub, Inc.
