#include <stdio.h>

int gVar = 100;//��������(global variable)

//�Լ� : sum()
//�Է� : �� ����
//��� : �� ������ ��
//�μ�ȿ�� : ����

int sum(int a, int b){
	int c;
	c= a + b; a=100;
	return c;
}
//�Լ�: goodPrint()
//�Է�: ����
//���: ����
//�μ�ȿ��: ȭ�鿡 good ���
void goodPrint(){	//����� ���� ���� �� void�� ��
	printf("good\n");
					//��ȯ�� ���� �����Ƿ� return �Ƚᵵ��
}

int main(){

	int x=10, y=20, z;
	z = sum(x,y);
	printf("z=%d x=%d\n\n", z, x);

	return 0;
}