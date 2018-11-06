#include <stdio.h>

void swap(int*ptr1, int*ptr2) {
	int temp=0;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}


int main(){
	int a = 100, b = 200;
	//swap: 변수 a,b의 값을 바꾼다.

	swap(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	
	return 0;
}
