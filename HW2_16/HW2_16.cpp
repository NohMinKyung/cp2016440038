#include <stdio.h>
#include <math.h>
//16.�� Ư���� ������ ��ü �ڸ����� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//����� �Է� : �� ���� ���� 
//��� : �ڸ����� ����

void main(void){
	int i=0;
	int num=0;

	printf("������ �Է��Ͻÿ�\n");
	scanf("%10d",&i);

	for(int a=0; a<10; a++){
		if((i>=(pow(10.f,a)))&&(i<(pow(10.f,(a+1))))){
			num=a+1;
		}
	}
	printf("�ڸ��� : %d��\n",num);
}