#include <stdio.h>
//17.1부터 100까지의 합을 for loop을 써서 구하는 프로그램을 작성하시오.

void main(void){
	int sum=0;

	for(int i=1;i<=100;i++){
		sum+=i;
	}
	printf("총합 : %d\n",sum);

}