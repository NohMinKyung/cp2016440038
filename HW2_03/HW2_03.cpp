#include <stdio.h>
//3. 1���� 100������ ����(����) �߿��� 3�� �����(3,6,9,12,..)���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(while�� ���)
void main(void){
	int i=0;
	int sum=0;

	while(i<100){
		if(i%3==0){
			sum+=i;
		}
		i++;
	}
	printf("������ : %4d\n",sum);


}