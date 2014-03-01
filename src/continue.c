#include <stdio.h>
 
int main ()
{
    int i;

    while(i<=10)
    {
		i++;
		
		if(i==5)
			continue;
			
        printf("looping %d \n",i);				
    }
      
   return 0;
}
