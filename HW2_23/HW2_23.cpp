#include <stdio.h>
//23.
//***** *	0- ��5 ���� 1 ��1
//*** ***	1- ��3 ���� 1 ��3
//* *****	2- ��1 ���� 1 ��5


//�� ����Ͻÿ�(�ݺ��� �Ἥ!)
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