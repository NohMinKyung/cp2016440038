#include <stdio.h>
//9.위의 문제에서 1부터 9사이 이외의 숫자를 사용자가 잘못 입력할 수도 있으니, 이 경우에 잘못된 숫자라는 것을 알려주는 에러 메시지를 출력하고 다시 숫자를 입력 받도록 처리하시오.(입력의 유효성 검사)

void main(void){
	int i;
	int n=0;

	printf("1부터 9사이의 숫자 하나를 입력하시오\n");
	scanf("%d",&n);

	while((n>9)||(n<1)){
		printf("[ERROR] '1부터 9사이'의 숫자 하나를 입력하시오\n");
		scanf("%d",&n);	
	}
	for(i=0; i<9; i++){
		printf("%d * %d = %d\n",n, i+1,n*(i+1));
	}

}