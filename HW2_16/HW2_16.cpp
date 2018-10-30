#include <stdio.h>
#include <math.h>
//16.한 특정한 정수의 전체 자릿수의 개수를 결정하는 프로그램을 작성하시오.
//사용자 입력 : 한 개의 정수 
//출력 : 자릿수의 개수

void main(void){
	int i=0;
	int num=0;

	printf("정수를 입력하시오\n");
	scanf("%10d",&i);

	for(int a=0; a<10; a++){
		if((i>=(pow(10.f,a)))&&(i<(pow(10.f,(a+1))))){
			num=a+1;
		}
	}
	printf("자릿수 : %d개\n",num);
}