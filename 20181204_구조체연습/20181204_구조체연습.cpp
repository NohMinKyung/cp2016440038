#include <stdio.h>
#include <stdlib.h>	//malloc()와 free()를 사용하기 위한 library
//Today's Topic: 구조체(Structure)

//구조체 선언: 기존의 데이터 타입으로 구성하여 새로운 데이터 타입을 선언한다.
//struct complex{
//	double real;//멤버 변수(member variable)
//	double imag;
//};//반드시 세미콜론으로 끝내야 한다.
//typedef struct complex Complex; //자료형 "struct complex"를 앞으로 "Complex"라고 부르겠다.

//위의 두 문장을 한 문장으로 만들 수 있다.
typedef struct complex {
	double real;
	double imag;
} Complex;

void printComplex(Complex* ptr){//대부분의 경우 구조체 포인터를 매개변수로 전달받는다.
	printf("%f + j %f\n", ptr->real, ptr->imag);
}

//함수 : conjugate()					[Version1 : bad]
//입력 : 복소수(포인터)
//출력 : 없음
//부수효과 : 입력된 복소수가 켤레 복소수로 변환됨
//void convertConjugate(Complex* ptr){
//	//허수부에 -1을 곱한다.
//	ptr->imag = -1 * ptr -> imag;
//}
//Complex* returnConjugate(Complex* ptr){
//	Complex temp;
//	temp.real = ptr->real;
//	temp.imag = -1 * ptr->imag;
//	return &temp;
//}

//함수 : conjugate()					[Version2 : good]
//입력 : 복소수(포인터)
//출력 : 없음
//부수효과 : 입력된 복소수가 켤레 복소수로 변환됨
Complex* returnConjugate(Complex* ptr){
	Complex* tempPtr;
	tempPtr = (Complex*)malloc(sizeof(Complex));//동적할당(dynamic Allocation) 몇 바이트 확보되는가는 프로그램 실행하면서 결정되는 것이기 때문에 동적(dynamic)이라 한다. (dynamic : 프로그램 실행중에 결정. static : compile 해야 바뀜.) 
	//==> sizeof(data type) : HEAP 영역에서 data type을 위한 공간확보(16바이트) 그리고 그 공간을 Complex를 위한 공간으로 사용.(8바이트 : real, 8바이트 : imag) 그 공간은 free라는 함수로 소멸시켜야만 소멸함.
	tempPtr->real = ptr->real; tempPtr->imag = -1 * ptr->imag;
	return tempPtr;
}

//두 개의 복소수를 포인터를 받아들이고 실수부끼리 허수부끼리 더해 결과의 포인터를 반환하는 함수
//함수 : addComplex()
//입력 : 두 개의 복소수(포인터)
//출력 : 두 복소수의 합
//부수효과 : 없음
Complex* addComplex(Complex* ptr1, Complex*ptr2){
	Complex* tempPtr;
	tempPtr = (Complex*)malloc(sizeof(Complex));
	tempPtr->real = ptr1->real + ptr2->real;
	tempPtr->imag = ptr1->imag + ptr2->imag;
	return tempPtr;	

}


//데이터 타입의 별명 선언
typedef int myintType;//자료형 "int"를 앞으로 "myintType"라고도 부르겠다.
int main(){
	myintType count = 10;//==>int count = 10;
	//구조체 변수 선언
	//대부분 구조체는 포인터 변수를 사용하여 접근한다.
	Complex a, b;//==>struct complex a;
	Complex* ptr;
	a.real = 10;//구조체변수의 멤버변수 접근방법==>구조체변수이름.멤버변수이름
	a.imag = 20;
	printComplex(&a);
	//convertConjugate(&a);
	//printComplex(&a);

	//ptr = returnConjugate(&a); 
	//printComplex(ptr); 
	//결과 => 쓰레기값 출력됨. (함수가 끝나고 공간이 소멸되므로 ptr이 소멸된 공간을 pointing 하는 꼴)
	//해결방법=>	(1)전역변수 사용(lifetime : 프로그램 시작~끝)
	//			(2)malloc()와 free()로 HEAP영역에서 변수 공간의 lifetime을 프로그래머가 직접 control
	free(ptr);

	//===============================
	//
	//				OS
	//
	//===============================
	//			TEXT ; 전역변수
	//-------------------------------
	//			HEAP ; 프로그래머가 직접 control
	//-------------------------------
	//			STACK ; 지역번수
	//===============================
	//
	//			  PROGRAM
	//
	//================================







	////구조체 포인터 변수 선언
	//Complex* ptr;
	//ptr = &a;
	//ptr->real = 100;//구조체 포인터 변수의 멤버변수 접근방법 ==>구조체 이름->멤버변수 이름
	//ptr->imag = 200;
	

	return 0;
}
