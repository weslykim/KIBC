#include <stdio.h>

int main(void)
{
	int score;
	printf("input score ; ");
	scanf("%d", &score);
	
	char grade;
	//grade = ;
	if (score >= 90) {
		grade = 'A';
	} else if (score >= 80) {
		grade = 'B';
	} else if (score >= 70) {
		grade = 'C';
	} else if (score >= 60) {
		grade = 'D';
	} else {
		grade = 'F';	
	}
	printf("score : %d --- grade : %c\n", score, grade);
	
	
	
	
	
	//if(score >= 90){
		//printf("score : %d --- A\n", score);
	//}else if(score >= 80 /*&&  score < 90*/) {
		//printf("score : %d --- B\n", score);
	//}else if(score >= 70){
		//printf("score : %d --- C\n", score);
	//}else if(score >= 60){
		//printf("score : %d --- D\n", score);	
	//}
	//else {
		//printf("score : %d --- F\n", score);
	//}

	return 0;
}
