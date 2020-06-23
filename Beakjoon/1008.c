#include <stdio.h>
int main(){
	double a;
	double b;
	double c;
	
	scanf("%f %f", &a, &b);
	
	if(a > 0 && b < 10)
		c = a / b;
		
	printf("%f", c);
}

