#include <stdio.h>

int main(void)
{
 	int male, female;
 	scanf("%d %d", &male, &female);
 	
 	//double maleRatio = 100.0 * male/ (male + female);
 	//double femaleRatio = 100.0 * female/ (male + female);
 	double maleRatio = (double)male / (male + female) * (double)100;
 	double femaleRatio = (double)female / (male + female) * (double)100; 
 	
 	printf("#male :/%d\t,maleRatio: %2f%%\n", male, maleRatio);
	printf("#female :/%d\t,femaleRatio: %2f%%\n", female, femaleRatio);
	return 0;
}
