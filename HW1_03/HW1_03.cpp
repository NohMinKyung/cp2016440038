#include <stdio.h>
//3. �� ��(������)�� �Է� �޾� ���� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

void main(void){
	int a, b, c;
	int max=0;

	printf("�� ������ �Է��Ͻÿ�\n");
	scanf("%3d %3d %3d", &a, &b, &c);
	
	if(max<=a)	max=a;
	if(max<=b)	max=b;
	if(max<=c)	max=c;

	printf("%3d\n", max);

}