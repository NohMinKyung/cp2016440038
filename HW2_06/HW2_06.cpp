#include <stdio.h>
//어떤 양의 정수(n)를 입력 받아(만약 0이나 음의 정수를 입력하면, 에러 메시지를 띄운 뒤, 다시 입력하도록 처리), 그 수의 2n을 구하는 프로그램을 작성하시오.
void main(void){
	int i;

	printf("양의 정수를 입력하시오\n");
	scanf("%3d",&i);

	while(i<=0){
		printf("[ERROR]'양'의 정수를 입력하시오\n");
		scanf("%3d",&i);	
	}
	printf("입력한수의 두배는 : %3d\n",2*i);

}