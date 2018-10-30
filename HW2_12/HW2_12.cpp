#include <stdio.h>
//for문(while)의 무한 반복과 break 문을 이용하여 0이 입력될 때까지 입력 받은 정수 중 가장 큰 정수를 출력하는 프로그램을 작성하시오.

void main(void){
	int i;
	int n=1;
	int max=0;

	for(;;){
		printf("정수를 입력하시오\n");
		scanf("%3d",&n);
		if(max<n){
			max=n;
		}
		if(n==0)
			break;
	}
	printf("가장 큰 수는 %3d 입니다\n",max);

}