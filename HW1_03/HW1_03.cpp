#include <stdio.h>
//3. 세 수(정수형)를 입력 받아 가장 큰 수를 출력하는 프로그램을 작성하시오.

void main(void){
	int a, b, c;
	int max=0;

	printf("세 정수를 입력하시오\n");
	scanf("%3d %3d %3d", &a, &b, &c);
	
	if(max<=a)	max=a;
	if(max<=b)	max=b;
	if(max<=c)	max=c;

	printf("%3d\n", max);

}