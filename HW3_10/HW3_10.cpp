#include <stdio.h>
//10. 배열의 두 인덱스 값을 교환하는 함수
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
