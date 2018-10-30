#include <stdio.h>
//8.1부터 9사이의 숫자 하나를 입력 받아 그 숫자의 구구단을 출력하는 프로그램을 작성하시오.(5이면 5단을 출력)

void main(void){
	int i;
	int n=0;

	printf("1부터 9사이의 숫자 하나를 입력하시오\n");
	scanf("%d",&n);

	for(i=0; i<9; i++){
		printf("%d * %d = %d\n",n, i+1,n*(i+1));
	}

}