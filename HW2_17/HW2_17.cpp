#include <stdio.h>
//17.1���� 100������ ���� for loop�� �Ἥ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

void main(void){
	int sum=0;

	for(int i=1;i<=100;i++){
		sum+=i;
	}
	printf("���� : %d\n",sum);

}