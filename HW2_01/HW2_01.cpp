#include <stdio.h>
//1. 1���� 10���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
void main(void){
	int i;
	int num[10]={0};
	for(i=0; i<10 ;i++){
		num[i]=i+1;
		printf("%3d",num[i]);
	}
}