#include <stdio.h>
//1. �� ��(����)�� �Է� �޾�, �� �� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

void main(void){
	int a, b;
	int max=0;

	printf("�� ������ �Է��Ͻÿ�\n");
	scanf("%3d %3d", &a, &b);
	
	if(a>=b)		max = a;
	else if(a<b)	max = b;

	printf("%3d\n", max);

}