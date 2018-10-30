#include <stdio.h>
//19.사용자로부터 한 숫자를 입력받아, 입력받은 숫자가 소수인지 아닌지를 검사하는 프로그램을 작성하시오.

void main(void){
	int i,j;

	printf("숫자를 입력하시오\n");
	scanf("%3d",&i);

	for(j=2; j<i; j++){
		if(i%j==0){
			break;
		}
	}
	if(i==j){
		printf("소수입니다\n");
	}
	else{
		printf("소수가 아닙니다\n");
	}

}