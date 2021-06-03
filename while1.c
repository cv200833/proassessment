#include <stdio.h>
int main()
{
	int i = 1, end;
	printf("수를 입력하세요: ");  //문장 출력
	scanf("%d", &end);  //d값 저장
	while (i < end); {  //i가 end보다 작을때까지 반복
	printf("%d", i);  //d값, i 출력
	i++; //먼저 해당 연산을 수행하고 나서, 피연산자의 값을 1 증가시킴
	}
	return 0;
}
