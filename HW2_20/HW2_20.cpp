#include <stdio.h>
//20.100 ������ �Ҽ��� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

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