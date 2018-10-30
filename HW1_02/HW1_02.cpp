#include <stdio.h>
//2. 하나의 정수를 입력 받아 이 수가 짝수(even number)인지 홀수(odd number)인지를 출력하는 프로그램을 작성하시오.

void main(void){
	int a;

	printf("정수를 입력하시오\n");
	scanf("%3d", &a);
	
	if(a%2==0)	printf("짝수\n");
	else		printf("홀수\n");


}