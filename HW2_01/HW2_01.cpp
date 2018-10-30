#include <stdio.h>
//1. 1부터 10까지 연속 출력하는 프로그램을 작성하시오.
void main(void){
	int i;
	int num[10]={0};
	for(i=0; i<10 ;i++){
		num[i]=i+1;
		printf("%3d",num[i]);
	}
}