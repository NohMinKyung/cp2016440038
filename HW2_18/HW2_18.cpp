#include <stdio.h>
//18.1���� 100���� 5�� ����� ���� for loop�� �Ἥ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

void main(void){
	int sum=0;

	for(int i=1;i<=100;i++){
		if(i%5==0){
			sum+=i;
		}
	}
	printf("���� : %d\n",sum);

}