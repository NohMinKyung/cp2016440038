#include <stdio.h>
//21.����ڰ� 0�� �Է��� ������ ���� ���ڸ� �Է¹޾�, �Է¹��� ������ �ִ밪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

void main(void){
	int n=1;
	int i,j,k;

	while(n!=0){
		printf("���� �ϳ��� �Է��Ͻÿ�\n");
		scanf("%2d",&n);
		for(i=2; i<=n; i++){
			k=0;
			for(j=2; j<=(i/2); j++){
				if(i%j==0){
					k=1;
					break;
				}
			}
			if(k==0){
				printf("%d  ",i);
			}
		}
	}
	

}