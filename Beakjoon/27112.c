#include <stdio.h>
#include <string.h>
int main()
{
	float input[6]; //�Է� 6�� 
	float result;
	char unit; 
	int i;
	
	for(i=0; i<5; i++)
	{
		scanf("%d %c", &input[i], &unit);
		
		if(strcmp(unit, "kg") ==  0) //ų�α׷� 
			{
				result = input[i] * 2.046;
				unit = "lb";
			}
			
		if(strcmp(unit, "l") ==  0) //���� 
			{
				result = input[i] * 0.2642;
				unit = "g";
			}
		if(strcmp(unit, "lb") ==  0) //�Ŀ�� 
			{
				result = input[i] * 0.4536;
				unit = "kg";
			}
		if(strcmp(unit, "g") ==  0) //���� 
			{
				result = input[i] * 3.7854;
				unit = "l";
			}
			
			printf("%d %c", result, unit);
	}
}
