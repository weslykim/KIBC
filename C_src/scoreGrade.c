#include <stdio.h>

int main(void)
{
	int score;
	printf("input score ; ");
	scanf("%d", &score);
	
	if(score >= 90){
		//A
		printf("score : %d --- A\n", score);
	}else if(score >= 80 /*&&  score < 90*/) {
		//B
		printf("score : %d --- B\n", score);
	}else if(score >= 70){
		//C
		printf("score : %d --- C\n", score);
	}else if(score >= 60){
		//D	
		printf("score : %d --- D\n", score);	
	}
	else {
		//F
		printf("score : %d --- F\n", score);
	}

	return 0;
}
