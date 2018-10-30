#include <stdio.h>

int gVar = 100;//전역변수(global variable)

//함수 : sum()
//입력 : 두 정수
//출력 : 두 정수의 합
//부수효과 : 없음

int sum(int a, int b){
	int c;
	c= a + b; a=100;
	return c;
}
//함수: goodPrint()
//입력: 없음
//출력: 없음
//부수효과: 화면에 good 출력
void goodPrint(){	//출력할 것이 없을 때 void를 씀
	printf("good\n");
					//반환할 것이 없으므로 return 안써도됌
}

int main(){

	int x=10, y=20, z;
	z = sum(x,y);
	printf("z=%d x=%d\n\n", z, x);

	return 0;
}