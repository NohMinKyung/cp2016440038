#include <stdio.h>
//13. month와 day를 입력 받아, 1월 1일부터의 총 day수를 출력하는 프로그램을 작성하시오. (switch문 사용) //1월 20일은 20일 출력, 2월 5일은 36일 출력. 단 2월은 28일로 계산.

void main(void){
	int i=1;
	int end_day[12]={0};
	int month=0;
	int day=0;
	int sum_day=0;

	printf("month를 입력하시오\n");
	scanf("%2d",&month);
	printf("day를 입력하시오\n");
	scanf("%2d",&day);

	switch(i){
	case 1:
		end_day[i] = 31;
		break;
	case 2:
		end_day[i] = 28;
		break;
	case 3:
		end_day[i] = 31;
		break;
	case 4:
		end_day[i] = 30;
		break;
	case 5:
		end_day[i] = 31;
		break;
	case 6:
		end_day[i] = 30;
		break;
	case 7:
		end_day[i] = 31;
		break;
	case 8:
		end_day[i] = 31;
		break;
	case 9:
		end_day[i] = 30;
		break;
	case 10:
		end_day[i] = 31;
		break;
	case 11:
		end_day[i] = 30;
		break;
	case 12:
		end_day[i] = 31;
		break;
	default:
		end_day[i] = 31;
		break;
	}
	for(int i=1; i<=month-1; i++){
		sum_day += end_day[i];
	}

	printf("%3d 일\n",sum_day+day);

}