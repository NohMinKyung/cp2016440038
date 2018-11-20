#include <stdio.h>
//�Լ� : swapElement()
//�Է� : �迭, �ΰ��� �ε���
//��� : ����
//�μ�ȿ�� : �迭�� �� �ε��� element�� �ٲ��.
void swapElement(int* arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
//�Լ�:insertElement()
//�Է�: �迭�̸�. �����Ϸ��� ����� �ε���
//���: ����
//�μ�ȿ��: �迭�� ele��ұ��� ���ĵ�
void insertElement(int*arr, int i, int len){
	for(int i = len-1; i > 0; i--){
		if(arr[i]<arr[i-1]){
			swapElement(arr, i, i-1);
		}

	}
}
//�Ʒ��� �������� § �ڵ�
//void insertElement(int*arr, int ele){
//	while(ele>0){
//		if(arr[ele-1] > arr[ele])
//			swapElement(arr, ele-1, ele);
//		else
//			break;
//	}
//}

void insertionSort(int* arr, int len){
	for(int i = 1 ; i < len; i++){
		insertElement(arr, i, len);
	}


}

void printArr(int* arr, int len) {
	printf("arr: ");
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void main(){
	int arr[5] = {31, 25, 12, 22, 11};
	printArr(arr, 5);
	
	insertionSort(arr,5);
	printArr(arr, 5);
}
