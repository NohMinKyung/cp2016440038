#include <stdio.h>
//2. 10개의 정수를 입력 받아 그 총합을 출력하는 프로그램을 작성하시오.
void main(void){
	int i;
	int num[10]={0};
	int sum=0;

	printf("10개의 정수를 입력하시오\n");

	for(i=0;i<10;i++){
		scanf("%3d",&num[i]);
		sum += num[i];
	}
	printf("총합은 : %3d\n",sum);

}