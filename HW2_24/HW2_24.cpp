#include <stdio.h>
//24.����ڿ��� ���� ���� �Է¹޾Ƽ� �� �� �� ��ŭ ��ǥ �ﰢ���� ����ÿ�.

void main(void){
	int i,j;
	int n;
	printf("������ �Է��Ͻÿ�\n");
	scanf("%2d",&n);

	for(i=0; i<n; i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}

}