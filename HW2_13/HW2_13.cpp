#include <stdio.h>
//13. month�� day�� �Է� �޾�, 1�� 1�Ϻ����� �� day���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (switch�� ���) //1�� 20���� 20�� ���, 2�� 5���� 36�� ���. �� 2���� 28�Ϸ� ���.

void main(void){
	int i=1;
	int end_day[12]={0};
	int month=0;
	int day=0;
	int sum_day=0;

	printf("month�� �Է��Ͻÿ�\n");
	scanf("%2d",&month);
	printf("day�� �Է��Ͻÿ�\n");
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

	printf("%3d ��\n",sum_day+day);

}