#include <stdio.h>

//c에서 포인터라 함은 두가지 의미가 있음
//1. 메모리주소
//2. 메모리 주소를 시작으로 하는 값의 자료형
int main(){
	int a = 10;	//변수 선언 + 변수 초기화
	int *ptr;	//포인터 변수 선언 (*:메모리주소가 들어간다는 말)
	ptr = &a;	// &a --> "address of" a, 변수 a의 주소 (변수 a를 위해 할당한 메모리의 첫번째 주소)
	*ptr = 20;	// *ptr --> "Data of" ptr, 포인터변수 ptr이 가리키는 곳의 데이터
	printf("a=%d\n", a);

	return 0;
}
