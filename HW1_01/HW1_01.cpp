#include <stdio.h>
//1. 두 수(정수)를 입력 받아, 그 중 큰 수를 출력하는 프로그램을 작성하시오.

void main(void){
	int a, b;
	int max=0;

	printf("두 정수를 입력하시오\n");
	scanf("%3d %3d", &a, &b);
	
	if(a>=b)		max = a;
	else if(a<b)	max = b;

	printf("%3d\n", max);

}