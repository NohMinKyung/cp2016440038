#include <stdio.h>
//21.사용자가 0을 입력할 때까지 여러 숫자를 입력받아, 입력받은 숫자의 최대값을 출력하는 프로그램을 작성하시오.

void main(void){
	int n=1;
	int i,j,k;

	while(n!=0){
		printf("숫자 하나를 입력하시오\n");
		scanf("%2d",&n);
		for(i=2; i<=n; i++){
			k=0;
			for(j=2; j<=(i/2); j++){
				if(i%j==0){
					k=1;
					break;
				}
			}
			if(k==0){
				printf("%d  ",i);
			}
		}
	}
	

}