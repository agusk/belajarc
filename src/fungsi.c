#include <stdio.h>
 
int add(int a, int b);
 
int main ()
{
    int a, b;
	a = 10; b = 15;
	
	int c = add(a,b);
	printf("add(%d,%d)=%d \n", a,b,c);
      
   return 0;
}

int add(int a, int b) {

	return a + b;
}
