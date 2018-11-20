#include <stdio.h>

//�Լ� : findMin()
//�Է� : �迭(�迭 �̸�, �迭 ����)
//��� : �迭, �ּҰ�
int findMin(int* arr, int len) {
	int min = arr[0];
	for (int count = 1; count < len; count++) {
		if (min > arr[count]) min = arr[count];
	}
	return min;
}

//�Լ� : findMinIndex()
//�Է� : �迭(�迭 �̸�, �迭 ����)
//��� : �ּҰ��� �ε���
int findMinIndex(int* arr, int len, int j) {
	//int minvalue = findMin(arr, len);
	//for (int i = 0; i < len; i++) {
	//	if (minvalue == arr[i]) return i;
	//}
	//return -1;//error
	int minindex = j;
	for (int count = j+1; count < len; count++) {
		if (arr[minindex] > arr[count]) minindex = count;
	}
	return minindex;
}

//�Լ� : swapElement()
//�Է� : �迭, �ΰ��� �ε���
//��� : ����
//�μ�ȿ�� : �迭�� �� �ε��� element�� �ٲ��.
void swapElement(int* arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void printArr(int* arr, int len) {
	printf("arr: ");
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

/*
	Selection Sorting
	1. ���� ���� ���� ã�´�.
	2. �� ó�� ���� �ּڰ��� ��ġ swap
	3. ���� �ϳ��� �ٿ����鼭 �ݺ�
	4. �� ĭ ������ ��
*/

//�Լ� : selectionSort()
//�Է� : �迭
//��� : ����
//�μ�ȿ�� : �迭�� ���ĵȴ�.
void selectionSort(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		int minindex = findMinIndex(arr, len, i);
		swapElement(arr, i, minindex);
	}
}

int main()
{
	int arr[5] = { 30, 11, 27, 15, 40};
	printArr(arr, 5);

	selectionSort(arr, 5);
	printArr(arr, 5);


}