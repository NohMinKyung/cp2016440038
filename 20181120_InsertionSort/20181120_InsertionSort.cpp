#include <stdio.h>
//함수 : swapElement()
//입력 : 배열, 두개의 인덱스
//출력 : 없음
//부수효과 : 배열의 두 인덱스 element가 바뀐다.
void swapElement(int* arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
//함수:insertElement()
//입력: 배열이름. 삽입하려는 요소의 인덱스
//출력: 없음
//부수효과: 배열의 ele요소까지 정렬됨
void insertElement(int*arr, int i, int len){
	for(int i = len-1; i > 0; i--){
		if(arr[i]<arr[i-1]){
			swapElement(arr, i, i-1);
		}

	}
}
//아래는 교수님이 짠 코드
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
