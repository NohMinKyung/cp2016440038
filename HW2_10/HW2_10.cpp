#include <stdio.h>
//10.�Ҽ�(prime-number) �˻�� ����ϰ� ����ڰ� �Է��� ���� �μ����� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

void main(void){
	int i;
	int n=0;

	printf("���� �ϳ��� �Է��Ͻÿ�\n");
	scanf("%d",&n);
	printf("%2d => ",n);
	for(i=1; i<=n; i++){
		if(n%i==0){
			printf("%2d ",i);
		}
	}

}