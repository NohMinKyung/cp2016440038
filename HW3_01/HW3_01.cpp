#include <stdio.h>
//1. �� ���� ���̿� ��� ������(�� ���� ����)�� ������� ȭ�鿡 ����ϴ� �Լ�
void printNumber(int a, int b){
	int count = a;
	while(count <= b)
		printf("%d\n",count++);
}


int main(){
	
	int a = 3, b = 50;
	printNumber(a,b);
	printNumber(-20,-100);
	printf("end of program\n");

	return 0;

}
