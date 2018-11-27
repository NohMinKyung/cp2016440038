#include <stdio.h>
//Today's Topic: ����ü(Structure)

//����ü ����: ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.
//struct complex{
//	double real;//��� ����(member variable)
//	double imag;
//};//�ݵ�� �����ݷ����� ������ �Ѵ�.
//typedef struct complex Complex; //�ڷ��� "struct complex"�� ������ "Complex"��� �θ��ڴ�.

//���� �� ������ �� �������� ���� �� �ִ�.
typedef struct complex {
	double real;
	double imag;
} Complex;


void printComplex(Complex* ptr){//��κ��� ��� ����ü �����͸� �Ű������� ���޹޴´�.
	printf("%f + j %f\n", ptr->real, ptr->imag);
}

//�Լ� : conjugate()
//�Է� : ���Ҽ�(������)
//��� : ����
//�μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��
void convertConjugate(Complex* ptr){
	//����ο� -1�� ���Ѵ�.
	ptr->imag = -1 * ptr -> imag;

}

Complex* returnConjugate(Complex* ptr){
	Complex temp;
	temp.real = ptr->real;
	temp.imag = -1 * ptr->imag;
	return &temp;
}



//������ Ÿ���� ���� ����
typedef int myintType;//�ڷ��� "int"�� ������ "myintType"��� �θ��ڴ�.
int main(){
	myintType count = 10;//==>int count = 10;
	//����ü ���� ����
	//��κ� ����ü�� ������ ������ ����Ͽ� �����Ѵ�.
	Complex a, b;//==>struct complex a;
	Complex* ptr;
	a.real = 10;//����ü������ ������� ���ٹ��==>����ü�����̸�.��������̸�
	a.imag = 20;
	
	//convertConjugate(&a);
	//printComplex(&a);

	ptr = returnConjugate(&a);
	printComplex(ptr);
	

	////����ü ������ ���� ����
	//Complex* ptr;
	//ptr = &a;
	//ptr->real = 100;//����ü ������ ������ ������� ���ٹ�� ==>����ü �̸�->������� �̸�
	//ptr->imag = 200;
	

	return 0;
}
