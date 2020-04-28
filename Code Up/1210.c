#include <stdio.h>
int main()
{
	int cheeze_burger=400 , veg_burger=340 , milk=170, rolled_egg=100, salad=70;
	int choose1, choose2;
	int summed;
	
	scanf("%d %d", &choose1, &choose2);
	
	switch(choose1)
	{
		case 1:
			choose1 = cheeze_burger;
		
			break;
		case 2: 
			choose1 = veg_burger;
			
			break;
		case 3:
			choose1 = milk;
		
			break;
		case 4:
			choose1 = rolled_egg;
			
			break;
		case 5:
			choose1 = salad;
			
			break;	
	}
	
	switch(choose2)
	{
		case 1:
			choose2 = cheeze_burger;
			break;
		case 2: 
			choose2 = veg_burger;
			break;
		case 3:
			choose2 = milk;
			break;
		case 4:
			choose2 = rolled_egg;
			break;
		case 5:
			choose2 = salad;
			break;	
	}
	
	summed = choose1 + choose2;
	
	
	if(summed > 500)
		printf("angry");
	else
		printf("no angry");
	
}
