#include <stdio.h>
//4. ����(����)�� �Է� �޾Ƽ� ���(A, B, C, D, E)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//(A : 100-80, B: 79-60, C: 59-40, D: 39-20, E: 19-0)


void main(void){
	int score;
	char grade;

	printf("������ �Է��Ͻÿ�\n");
	scanf("%2d", &score);
	
	if((score<=100)&&(score>=80))	grade = 'A';
	if((score<=79)&&(score>=60))	grade = 'B';
	if((score<=59)&&(score>=40))	grade = 'C';
	if((score<=39)&&(score>=20))	grade = 'D';
	if((score<=19)&&(score>=0))		grade = 'E';

	printf("%c\n", grade);

}