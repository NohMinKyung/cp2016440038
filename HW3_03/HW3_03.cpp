#include <stdio.h>
//3. �� ���� ������ ������ �� �Ҽ��� ȭ�鿡 ����ϴ� �Լ�
void printPrimeNumber(int a, int b){
	int i, j, k;
	for(i=a; i<=b; i++){
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


int main(){
	
	int a = 3, b = 50;
	printPrimeNumber(a,b);

	return 0;

}
