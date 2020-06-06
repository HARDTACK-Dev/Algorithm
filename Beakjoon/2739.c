#include <stdio.h>
int main()
{
	int input, result;
	int i;
		
	scanf("%d", &input);
	
	for(i=1; i<=9; i++)
	{
		result = input * i;
		
		printf("%d * %d = %d\n", input, i, result);
	}
}
