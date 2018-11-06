#include <stdio.h>
//2. 두 정수 사이의 모든 정수들을 더해 그 결과를 반환하는 함수
int sumNumber(int a, int b){
	int sum=0;

	for(int i=a+1; i<b; i++){
		sum+=i;
	}
	return sum;

}


int main(){
	
	int a = 3, b = 50;
	printf("sum : %4d\n", sumNumber(a,b));

	return 0;

}
