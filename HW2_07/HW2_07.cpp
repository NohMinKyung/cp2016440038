#include <stdio.h>
//7.0이 입력될 때까지 계속 정수를 입력 받고, 입력된 모든 숫자들의 총합을 출력하시오.

void main(void){
	int i=1;
	int sum=0;

	while(i!=0){
		printf("정수를 입력하시오\n");
		scanf("%3d",&i);
		sum+=i;
	}
	printf("입력한 수의 총합은 : %3d\n",sum);

}