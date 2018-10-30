#include <stdio.h>
//1부터 100사이의 숫자(정수) 중에서 3의 공배수(3,6,9,12,..)들의 총합을 출력하는 프로그램을 작성하시오.(do-while문 사용)
void main(void){
	int i=0;
	int sum=0;

	do{
		if(i%3==0){
			sum+=i;
		}
		i++;
	}while(i<100);

	printf("총합은 : %4d\n",sum);


}