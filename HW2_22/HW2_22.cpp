#include <stdio.h>
//22.����ڰ� 0�� �Է��� ������ ���� ���ڸ� �Է¹޾�, �Է¹��� ������ �ִ밪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

void main(void){
	int i;
	int n=1;
	int max=0;

	printf("������ �Է��Ͻÿ�\n");

	for(;;){
		scanf("%3d",&n);
		if(max<n){
			max=n;
		}
		if(n==0)
			break;
	}
	printf("��� : %3d \n",max);

}