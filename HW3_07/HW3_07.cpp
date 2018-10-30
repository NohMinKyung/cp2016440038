#include <stdio.h>
//7. 정수 배열의 합을 반환하는 함수
//함수이름: addArray
//입력: 배열
//출력: 배열 각 요소들이 합
//부수효과 : 없음
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