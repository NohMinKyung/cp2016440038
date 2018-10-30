#include <stdio.h>
//24.사용자에게 라인 수를 입력받아서 그 줄 수 만큼 별표 삼각형을 만드시오.

void main(void){
	int i,j;
	int n;
	printf("정수를 입력하시오\n");
	scanf("%2d",&n);

	for(i=0; i<n; i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}

}