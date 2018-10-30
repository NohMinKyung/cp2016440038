#include <stdio.h>
//11.위의 문제를 0을 입력하기 전까지는 계속 수행(인수 출력)하도록 수정하시오

void main(void){
	int i;
	int n=1;

	while(n!=0){
		printf("\n");
		printf("숫자 하나를 입력하시오\n");
		scanf("%2d",&n);
		printf("%2d => ",n);
		for(i=1; i<=n; i++){
			if(n%i==0){
				printf("%2d ",i);
			}
		}
	}

}