#include <stdio.h>
//9. �迭�� �ִ밪�� �ε����� ��ȯ�ϴ� �Լ�
int findMaxIndex(int a[], int length){
	int max=0;
	int max_index = 0;
	int i=0;

	for(i=0; i<length; i++){
		if(a[i]>max){
			max = a[i];
			max_index = i;
		}
	}
	return max_index;

}


int main(){
	int a[4] = {10, 20, 90, 40};
	int length = 4;
	printf("The max index is %3d\n", findMaxIndex(a, length));
	return 0;

}
