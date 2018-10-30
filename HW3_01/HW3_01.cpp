#include <stdio.h>
//1. 두 정수 사이에 모든 정수들(두 정수 포함)를 순서대로 화면에 출력하는 함수
void printNumber(int a, int b){
	int count = a;
	while(count <= b)
		printf("%d\n",count++);
}


int main(){
	
	int a = 3, b = 50;
	printNumber(a,b);
	printNumber(-20,-100);
	printf("end of program\n");

	return 0;

}
