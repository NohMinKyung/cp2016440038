#include <stdio.h>
//11.���� ������ 0�� �Է��ϱ� �������� ��� ����(�μ� ���)�ϵ��� �����Ͻÿ�

void main(void){
	int i;
	int n=1;

	while(n!=0){
		printf("\n");
		printf("���� �ϳ��� �Է��Ͻÿ�\n");
		scanf("%2d",&n);
		printf("%2d => ",n);
		for(i=1; i<=n; i++){
			if(n%i==0){
				printf("%2d ",i);
			}
		}
	}

}