#include <stdio.h>
//7.0�� �Էµ� ������ ��� ������ �Է� �ް�, �Էµ� ��� ���ڵ��� ������ ����Ͻÿ�.

void main(void){
	int i=1;
	int sum=0;

	while(i!=0){
		printf("������ �Է��Ͻÿ�\n");
		scanf("%3d",&i);
		sum+=i;
	}
	printf("�Է��� ���� ������ : %3d\n",sum);

}