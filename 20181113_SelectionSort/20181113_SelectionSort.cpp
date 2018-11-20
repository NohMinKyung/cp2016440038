#include <stdio.h>

//함수 : findMin()
//입력 : 배열(배열 이름, 배열 길이)
//출력 : 배열, 최소값
int findMin(int* arr, int len) {
	int min = arr[0];
	for (int count = 1; count < len; count++) {
		if (min > arr[count]) min = arr[count];
	}
	return min;
}

//함수 : findMinIndex()
//입력 : 배열(배열 이름, 배열 길이)
//출력 : 최소값의 인덱스
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

//함수 : swapElement()
//입력 : 배열, 두개의 인덱스
//출력 : 없음
//부수효과 : 배열의 두 인덱스 element가 바뀐다.
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
	1. 제일 작은 값을 찾는다.
	2. 맨 처음 값과 최솟값의 위치 swap
	3. 범위 하나씩 줄여가면서 반복
	4. 한 칸 남으면 끝
*/

//함수 : selectionSort()
//입력 : 배열
//출력 : 없음
//부수효과 : 배열이 정렬된다.
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