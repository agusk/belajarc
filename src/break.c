#include <stdio.h>
 
int main ()
{
    int i;

    while(1)
    {
		i++;
        printf("looping %d \n",i);
		
		if(i>=10)
			break;
    }

      
   return 0;
}
