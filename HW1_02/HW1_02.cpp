#include <stdio.h>
//2. �ϳ��� ������ �Է� �޾� �� ���� ¦��(even number)���� Ȧ��(odd number)������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

void main(void){
	int a;

	printf("������ �Է��Ͻÿ�\n");
	scanf("%3d", &a);
	
	if(a%2==0)	printf("¦��\n");
	else		printf("Ȧ��\n");


}