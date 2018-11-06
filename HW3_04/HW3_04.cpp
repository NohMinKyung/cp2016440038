#include <stdio.h>
//4. 정수 3개 중 제일 작은 정수를 반환하는 함수
int findMin(int a, int b, int c){

	int min=10000;
	
	if(min>=a)	min=a;
	if(min>=b)	min=b;
	if(min>=c)	min=c;

	return min;

}


int main(){
	
	int a = 3, b = 50, c = 22;
	printf("min : %4d\n", findMin(a,b,c));

	return 0;

}
