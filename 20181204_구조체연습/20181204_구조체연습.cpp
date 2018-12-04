#include <stdio.h>
#include <stdlib.h>	//malloc()�� free()�� ����ϱ� ���� library
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

//�Լ� : conjugate()					[Version1 : bad]
//�Է� : ���Ҽ�(������)
//��� : ����
//�μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��
//void convertConjugate(Complex* ptr){
//	//����ο� -1�� ���Ѵ�.
//	ptr->imag = -1 * ptr -> imag;
//}
//Complex* returnConjugate(Complex* ptr){
//	Complex temp;
//	temp.real = ptr->real;
//	temp.imag = -1 * ptr->imag;
//	return &temp;
//}

//�Լ� : conjugate()					[Version2 : good]
//�Է� : ���Ҽ�(������)
//��� : ����
//�μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��
Complex* returnConjugate(Complex* ptr){
	Complex* tempPtr;
	tempPtr = (Complex*)malloc(sizeof(Complex));//�����Ҵ�(dynamic Allocation) �� ����Ʈ Ȯ���Ǵ°��� ���α׷� �����ϸ鼭 �����Ǵ� ���̱� ������ ����(dynamic)�̶� �Ѵ�. (dynamic : ���α׷� �����߿� ����. static : compile �ؾ� �ٲ�.) 
	//==> sizeof(data type) : HEAP �������� data type�� ���� ����Ȯ��(16����Ʈ) �׸��� �� ������ Complex�� ���� �������� ���.(8����Ʈ : real, 8����Ʈ : imag) �� ������ free��� �Լ��� �Ҹ���Ѿ߸� �Ҹ���.
	tempPtr->real = ptr->real; tempPtr->imag = -1 * ptr->imag;
	return tempPtr;
}

//�� ���� ���Ҽ��� �����͸� �޾Ƶ��̰� �Ǽ��γ��� ����γ��� ���� ����� �����͸� ��ȯ�ϴ� �Լ�
//�Լ� : addComplex()
//�Է� : �� ���� ���Ҽ�(������)
//��� : �� ���Ҽ��� ��
//�μ�ȿ�� : ����
Complex* addComplex(Complex* ptr1, Complex*ptr2){
	Complex* tempPtr;
	tempPtr = (Complex*)malloc(sizeof(Complex));
	tempPtr->real = ptr1->real + ptr2->real;
	tempPtr->imag = ptr1->imag + ptr2->imag;
	return tempPtr;	

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
	printComplex(&a);
	//convertConjugate(&a);
	//printComplex(&a);

	//ptr = returnConjugate(&a); 
	//printComplex(ptr); 
	//��� => �����Ⱚ ��µ�. (�Լ��� ������ ������ �Ҹ�ǹǷ� ptr�� �Ҹ�� ������ pointing �ϴ� ��)
	//�ذ���=>	(1)�������� ���(lifetime : ���α׷� ����~��)
	//			(2)malloc()�� free()�� HEAP�������� ���� ������ lifetime�� ���α׷��Ӱ� ���� control
	free(ptr);

	//===============================
	//
	//				OS
	//
	//===============================
	//			TEXT ; ��������
	//-------------------------------
	//			HEAP ; ���α׷��Ӱ� ���� control
	//-------------------------------
	//			STACK ; ��������
	//===============================
	//
	//			  PROGRAM
	//
	//================================







	////����ü ������ ���� ����
	//Complex* ptr;
	//ptr = &a;
	//ptr->real = 100;//����ü ������ ������ ������� ���ٹ�� ==>����ü �̸�->������� �̸�
	//ptr->imag = 200;
	

	return 0;
}
