#include <stdio.h>
//for��(while)�� ���� �ݺ��� break ���� �̿��Ͽ� 0�� �Էµ� ������ �Է� ���� ���� �� ���� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

void main(void){
	int i;
	int n=1;
	int max=0;

	for(;;){
		printf("������ �Է��Ͻÿ�\n");
		scanf("%3d",&n);
		if(max<n){
			max=n;
		}
		if(n==0)
			break;
	}
	printf("���� ū ���� %3d �Դϴ�\n",max);

}