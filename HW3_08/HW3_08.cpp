#include <stdio.h>
//8. �迭�� �ִ밪�� ��ȯ�ϴ� �Լ�
int findMax(int a[], int length){
	int max=0;

	for(int i=0; i<length; i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	return max;

}


int main(){
	int a[4] = {10, 20, 30, 40};
	int length = 4;
	printf("The max is %3d\n", findMax(a, length));
	return 0;

}



