#include <stdio.h>
#include <math.h> 

int main ()
{	
	double a = 3, b = 8, c = 4;
	
	double  y = (-b + sqrt(b*b - 4*a*c)) / (2*a);
	printf("y = %.3f \n", y);
	
	return 0;
}
