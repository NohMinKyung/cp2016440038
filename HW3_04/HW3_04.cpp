#include <stdio.h>
//4. ���� 3�� �� ���� ���� ������ ��ȯ�ϴ� �Լ�
int findMin(int a, int b, int c){

	int min=10000;
	
	if(min>=a)	min=a;
	if(min>=b)	min=b;
	if(min>=c)	min=c;

	return min;

}


int main(){
	
	int a = 3, b = 50, c = 22;
	printf("min : %4d\n", findMin(a,b,c));

	return 0;

}
