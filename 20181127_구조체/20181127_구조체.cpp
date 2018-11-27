#include <stdio.h>
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

//함수 : conjugate()
//입력 : 복소수(포인터)
//출력 : 없음
//부수효과 : 입력된 복소수가 켤레 복소수로 변환됨
void convertConjugate(Complex* ptr){
	//허수부에 -1을 곱한다.
	ptr->imag = -1 * ptr -> imag;

}

Complex* returnConjugate(Complex* ptr){
	Complex temp;
	temp.real = ptr->real;
	temp.imag = -1 * ptr->imag;
	return &temp;
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
	
	//convertConjugate(&a);
	//printComplex(&a);

	ptr = returnConjugate(&a);
	printComplex(ptr);
	

	////구조체 포인터 변수 선언
	//Complex* ptr;
	//ptr = &a;
	//ptr->real = 100;//구조체 포인터 변수의 멤버변수 접근방법 ==>구조체 이름->멤버변수 이름
	//ptr->imag = 200;
	

	return 0;
}
