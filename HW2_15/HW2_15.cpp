#include <stdio.h>
//1~100 사이의 숫자 하나를 정한 뒤(랜덤으로 생성해도 됨), 10번 이내로 그 숫자를 맞추는 게임을 작성하시오.(10번 이내로 못 맞추었을 경우는 약간 머리가 딸리는 사람이므로 Game Over 처리를 신랄하게 해 주기 바람)

void main(void){
	int i=0;
	int num = 44;
	int cnt=0;

	while(i!=num){
		printf("1~100 사이의 숫자를 입력하시오\n");
		scanf("%3d",&i);
		if(i<num){
			printf("입력하신 숫자보다 큽니다\n\n");
			cnt++;
		}
		else if(i>num){
			printf("입력하신 숫자보다 작습니다\n\n");
			cnt++;
		}
		if(cnt==10)
			break;
	}
	if(cnt==10) printf("Game Over\n");
	else printf("정답입니다!\n");

}