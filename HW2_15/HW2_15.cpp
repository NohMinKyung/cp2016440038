#include <stdio.h>
//1~100 ������ ���� �ϳ��� ���� ��(�������� �����ص� ��), 10�� �̳��� �� ���ڸ� ���ߴ� ������ �ۼ��Ͻÿ�.(10�� �̳��� �� ���߾��� ���� �ణ �Ӹ��� ������ ����̹Ƿ� Game Over ó���� �Ŷ��ϰ� �� �ֱ� �ٶ�)

void main(void){
	int i=0;
	int num = 44;
	int cnt=0;

	while(i!=num){
		printf("1~100 ������ ���ڸ� �Է��Ͻÿ�\n");
		scanf("%3d",&i);
		if(i<num){
			printf("�Է��Ͻ� ���ں��� Ů�ϴ�\n\n");
			cnt++;
		}
		else if(i>num){
			printf("�Է��Ͻ� ���ں��� �۽��ϴ�\n\n");
			cnt++;
		}
		if(cnt==10)
			break;
	}
	if(cnt==10) printf("Game Over\n");
	else printf("�����Դϴ�!\n");

}