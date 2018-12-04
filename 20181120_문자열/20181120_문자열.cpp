#include <stdio.h>
#include <string.h> //strcat()�� strcpy() �Լ��� ����ϱ� ���� library

void printArr(char* arr, int len) {//������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
	for (int i = 0; i < len; i++) {
		printf("arr[%d] = %c\n", i, arr[i]);
	}
}


int main(){
	char c;//character(����)��
	c='A';//==>c=65;
	printf("c=%d\n", c);
	printf("c=%c\n", c);

	char a[] = {'h', 'e', 'l', 'l', 'o'};
	printArr(a,5);

	//���� null \0�� �־��־� ���ڿ��� ������ �˸���! �׷� ���ڿ��� ���� �˷��� �ʿ� ����
	//==> char b[] = {'h', 'e', 'l', 'l', 'o', \0}
	char b[] = "hello"; //���� ������ double quote ("")�� ���ϰ� ��Ÿ��
	printf("%s \n", b); //string(���ڿ�)

	//string.h�� library���� Ȱ���� �� �ִ� �迭�� ���õ� �Լ���

	//string�� ���̸� �����ִ� �Լ� strlen()
	printf("the length of the the string is %d \n", strlen(b));

	//�� ���� ���ڸ� ���ϴ�(concaptimate) �Լ� strcat()
	char str1[50] = "hello"; //�迭�� ũ�⸦ �ʿ��� ������ŭ�� ����� �� �ڿ� ���ڿ� �̾���̷��� �� �� ���� �ڸ� ��� ������!
	char* str2 = " world";	//�迭�� ũ�� : �� �ʿ��� ������ŭ
	strcat(str1, str2);
	printf("%s \n", str1); //str1�� str2�� ������
	//printf("%s \n", strcat(str1, str2));

	
	strcpy(str1, str2);
	printf("%s \n", str1);

	return 0;
}
