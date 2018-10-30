#include <stdio.h>
//5. 메뉴를 출력하고, 사용자로부터 입력을 받아 선택된 메뉴를 출력하는 프로그램을 작성하시오.
//choose one of the following.
//apple
//orange
//banana
//peach
//
//enter your choice here : (사용자 입력)orange
//
//--------------
//Your choice is “orange”.

void main(void){
	char str[]="orange";
	printf("choose one of the following.\n");
	printf("apple\n");
	printf("orange\n");
	printf("banana\n");
	printf("peach\n\n");

	printf("enter your choice here : ");
	scanf("%s", &str);
	printf("-----------------------------\n");

	printf("Your choice is %s\n", str);



}