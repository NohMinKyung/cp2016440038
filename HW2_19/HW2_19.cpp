#include <stdio.h>
//19.����ڷκ��� �� ���ڸ� �Է¹޾�, �Է¹��� ���ڰ� �Ҽ����� �ƴ����� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.

void main(void){
	int i,j;

	printf("���ڸ� �Է��Ͻÿ�\n");
	scanf("%3d",&i);

	for(j=2; j<i; j++){
		if(i%j==0){
			break;
		}
	}
	if(i==j){
		printf("�Ҽ��Դϴ�\n");
	}
	else{
		printf("�Ҽ��� �ƴմϴ�\n");
	}

}