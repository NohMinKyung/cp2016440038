#include <stdio.h>
//printArray()
//입력 : 배열
//출력 : 배열
//부수효과 : 화면에 배열의 값을 출력
void printArray(int arr[], int length){
	for(int index = 0; index < length; index++){
		printf("array[%d] = %d \n", index, arr[index]);
	}
}


int main(){
	int a[3]={10, 20, 30};	//배열의 선언: (배열 이름 : a,  배열 길이 : 3)
	int* ptr;
	//***배열의 이름만 사용하면 그 배열 첫 요소의 포인터값이 된다.
	ptr = a;	//==> ptr = &a[0];

	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", *ptr);

	//***포인터변수 이름을 배열 이름으로 사용할 수 있다.
	printf("a[0] = %d\n", ptr[0]);
	printf("a[1] = %d\n", ptr[1]);
	printf("a[2] = %d\n", ptr[2]);
	//포인터변수의 이름과 배열 이름이 서로 호환된다.

	//printArray(a, 3);
	//printf("a=%d, b=%d\n", a, b);

	return 0;
}
