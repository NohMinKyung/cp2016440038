#include <stdio.h>
//5. n단의 구구단을 화면에 출력하는 함수
void print99(int n){

	for(int i=0; i<9; i++){
		printf("%d * %d = %d\n",n, i+1,n*(i+1));
	}
}


int main(){
	
	int n=8;
	print99(n);

	return 0;

}
