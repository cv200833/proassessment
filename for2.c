#include <stdio.h>

/* 
int main()
{
	int i;  //정수 i 저장
	for (i = 1; i < 10; i++) //i=1, i가 10보다 작으면 1씩 더함
	{
		printf("2x%d = %2d\n", i, i * 2);  //문장 출력
	}
	return 0; 
}
*/

#include <stdio.h>
int main()
{
	int i, j;  //정수 i,j 저장
	for(i = 2; i < 10; i++) //i는 2, i가 10보다 작으면 1씩 더함
	{
		for (j = 1; j < 10; j++) //j=2, j가 10보다 작으면 1씩 더함
		{
			printf("%dx%d = %d", i, j, i*j);  //문장 출력
		}
	}
}
