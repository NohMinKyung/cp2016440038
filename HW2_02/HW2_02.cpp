#include <stdio.h>
//2. 10���� ������ �Է� �޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
void main(void){
	int i;
	int num[10]={0};
	int sum=0;

	printf("10���� ������ �Է��Ͻÿ�\n");

	for(i=0;i<10;i++){
		scanf("%3d",&num[i]);
		sum += num[i];
	}
	printf("������ : %3d\n",sum);

}