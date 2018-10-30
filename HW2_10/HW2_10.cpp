#include <stdio.h>
//10.소수(prime-number) 검사와 흡사하게 사용자가 입력한 수의 인수들을 모두 출력하는 프로그램을 작성하시오.

void main(void){
	int i;
	int n=0;

	printf("숫자 하나를 입력하시오\n");
	scanf("%d",&n);
	printf("%2d => ",n);
	for(i=1; i<=n; i++){
		if(n%i==0){
			printf("%2d ",i);
		}
	}

}