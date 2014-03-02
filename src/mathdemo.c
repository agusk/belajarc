#include <stdio.h>
#include <math.h> 

int main ()
{
	
	double x = 3;
	printf("cos(%d) = %.3f \n", x, cos(x));
	printf("sin(%d) = %.3f \n", x, sin(x));
	printf("exp(%d) = %.3f \n", x, exp(x));
	printf("log(%d) = %.3f \n", x, log(x));
	printf("pow(%d,2) = %.3f \n", x, pow(x,2));
    
	return 0;
}
