#include <stdio.h>
#include <string.h> //strcat()와 strcpy() 함수를 사용하기 위한 library

void printArr(char* arr, int len) {//앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.
	for (int i = 0; i < len; i++) {
		printf("arr[%d] = %c\n", i, arr[i]);
	}
}


int main(){
	char c;//character(문자)형
	c='A';//==>c=65;
	printf("c=%d\n", c);
	printf("c=%c\n", c);

	char a[] = {'h', 'e', 'l', 'l', 'o'};
	printArr(a,5);

	//끝에 null \0을 넣어주어 문자열의 끝임을 알리자! 그럼 문자열의 길이 알려줄 필요 없음
	//==> char b[] = {'h', 'e', 'l', 'l', 'o', \0}
	char b[] = "hello"; //위의 형식을 double quote ("")로 편하게 나타냄
	printf("%s \n", b); //string(문자열)

	//string.h의 library에서 활용할 수 있는 배열에 관련된 함수들

	//string의 길이를 보여주는 함수 strlen()
	printf("the length of the the string is %d \n", strlen(b));

	//두 개의 문자를 합하는(concaptimate) 함수 strcat()
	char str1[50] = "hello"; //배열의 크기를 필요한 갯수만큼만 만들면 그 뒤에 문자열 이어붙이려고 할 때 붙일 자리 없어서 에러나!
	char* str2 = " world";	//배열의 크기 : 딱 필요한 갯수만큼
	strcat(str1, str2);
	printf("%s \n", str1); //str1에 str2가 더해짐
	//printf("%s \n", strcat(str1, str2));

	
	strcpy(str1, str2);
	printf("%s \n", str1);

	return 0;
}
