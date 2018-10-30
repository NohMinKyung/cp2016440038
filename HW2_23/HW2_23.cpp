#include <stdio.h>
//23.
//***** *	0- 별5 공백 1 별1
//*** ***	1- 별3 공백 1 별3
//* *****	2- 별1 공백 1 별5


//를 출력하시오(반복문 써서!)
void main(void){
	int i,j,k;

	for(i=0; i<3; i++){
		for(j=0; j<(2-i)*2+1;j++){
			printf("*");
		}
		printf(" ");
		for(k=0; k< 2*i+1; k++){
			printf("*");
		}
		printf("\n");
	}


}