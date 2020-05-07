#include <stdio.h>
#define NUM 999
int main()
{
	
	int input;
	int score[NUM];
	int big=0, small=100, i;
	
	
	scanf("%d", &input);
	
	for(i=0; i<input; i++)
	{
		scanf("%d", &score[i]);
			
		if(score[i] < small)
		{
			small = score[i];
		}
		
		if(score[i] > big)
		{
			big = score[i];
		}
	}
		
	printf("%d %d", big, small);
	
	
}
