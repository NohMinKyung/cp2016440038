#include <stdio.h>
//20.100 이하의 소수를 모두 출력하는 프로그램을 작성하시오

void main(void){
	int i,j,k;


	for(i=2; i<=100; i++){
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