#include <stdio.h>
//7. ���� �迭�� ���� ��ȯ�ϴ� �Լ�
//�Լ��̸�: addArray
//�Է�: �迭
//���: �迭 �� ��ҵ��� ��
//�μ�ȿ�� : ����
int addArray(int a[], int length){
	int sum = 0;

	for(int i=0; i<length; i++){
		sum += a[i];
	}
	return sum;
	
}


int main(){
	int a[4] = {10, 20, 30, 40};
	int b[4] = {1, 10, 99, -2};
	int length = 4;

	printf("The sum is %3d\n", addArray(a, length));
	return 0;

}