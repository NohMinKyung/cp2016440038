#include <stdio.h>
//6. 임의의 짝수를 두 소수의 합으로 표현하여 화면에 출력하는 함수
void printEven(int n){

	int i, j, k, cnt=0;
	int arr[100]={0};
	for(i=2; i<=n; i++){
		k=0;
		for(j=2; j<=(i/2); j++){
			if(i%j==0){
				k=1;
				break;
			}
		}
		if(k==0){
			arr[cnt++]=i;
		}
	}
	for(int a=0; a<=cnt/2; a++){
		for(int b=cnt/2; b<=cnt; b++){
			if(arr[a]+arr[b]==n){
				printf("%2d = %2d + %2d \n", n, arr[a], arr[b]);
			}
		}
	
	}
}

int main(){
	
	int n=100;
	printEven(n);

	return 0;

}
