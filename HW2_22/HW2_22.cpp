#include <stdio.h>
//22.사용자가 0을 입력할 때까지 여러 숫자를 입력받아, 입력받은 숫자의 최대값을 출력하는 프로그램을 작성하시오.

void main(void){
	int i;
	int n=1;
	int max=0;

	printf("정수를 입력하시오\n");

	for(;;){
		scanf("%3d",&n);
		if(max<n){
			max=n;
		}
		if(n==0)
			break;
	}
	printf("결과 : %3d \n",max);

}