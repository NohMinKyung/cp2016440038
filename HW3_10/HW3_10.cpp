#include <stdio.h>
//10. �迭�� �� �ε��� ���� ��ȯ�ϴ� �Լ�
void changeIndex(int a[], int length){
	int temp;

	temp=a[0];
	a[0]=a[1];
	a[1]=temp;

}


int main(){
	int a[2] = {10, 20};
	int length = 2;
	changeIndex(a, length);

	printf("%2d %2d \n", a[0], a[1]);
	return 0;

}
