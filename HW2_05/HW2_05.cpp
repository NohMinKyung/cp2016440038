#include <stdio.h>
//1���� 100������ ����(����) �߿��� 3�� �����(3,6,9,12,..)���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(do-while�� ���)
void main(void){
	int i=0;
	int sum=0;

	do{
		if(i%3==0){
			sum+=i;
		}
		i++;
	}while(i<100);

	printf("������ : %4d\n",sum);


}