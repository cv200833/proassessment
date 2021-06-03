#include <stdio.h> 
int main()
{
	int i, j, k; //정수 i,j,k 저장
	for (i = 0; i < 10; i++) //i=0, i가 10보다 작으면 1씩 더함
	{
		for (j = 0; j <= 10 - i; j++) //j=0, j가 10-i보다 같거나 작으면 1씩 더함
		{
			putchar(' '); //문자 하나를 콘솔창에 출력
		}
		for (k = 0; k <= 2 * i; k++) //k=0, k가 2*i보다 같거나 작으면 1씩 더함
		{
			putchar('@'); //@ 출력
		}
		puts(""); //입력 문자열을 콘솔 화면에 출력
	}
	return 0;
}
