#include <stdio.h>
//14.사용자로부터 숫자 하나를 입력받아, 7부터 입력받은 수까지의 모든 정수들의 합을 구하는 프로그램을 작성하시오. 입력받은 숫자가 7보다 작으면 에러 메시지를 출력한다.

void main(void){
	int i=0;

	printf("7 이상의 정수를 입력하시오\n");
	scanf("%3d",&i);
	while(i<7){
		printf("[ERROR] '7 이상'의 정수를 입력하시오\n");
		scanf("%3d",&i);
	}
	printf("7부터 합은 : %3d\n",i*(i+1)/2-21);

}