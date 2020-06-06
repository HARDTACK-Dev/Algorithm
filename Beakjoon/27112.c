#include <stdio.h>
#include <string.h>
int main()
{
	float input[6]; //입력 6개 
	float result;
	char unit; 
	int i;
	
	for(i=0; i<5; i++)
	{
		scanf("%d %c", &input[i], &unit);
		
		if(strcmp(unit, "kg") ==  0) //킬로그램 
			{
				result = input[i] * 2.046;
				unit = "lb";
			}
			
		if(strcmp(unit, "l") ==  0) //리터 
			{
				result = input[i] * 0.2642;
				unit = "g";
			}
		if(strcmp(unit, "lb") ==  0) //파운드 
			{
				result = input[i] * 0.4536;
				unit = "kg";
			}
		if(strcmp(unit, "g") ==  0) //갤런 
			{
				result = input[i] * 3.7854;
				unit = "l";
			}
			
			printf("%d %c", result, unit);
	}
}
