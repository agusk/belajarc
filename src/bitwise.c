#include <stdio.h>
 
int main ()
{
   // ganti nilai ini sesuai dengan keinginan	
   int a = 7;
   int b = 12;
   
   printf("%d & %d = %d \n", a,b, a & b);
   printf("%d | %d = %d \n", a,b, a | b);
   printf("%d ^ %d = %d \n", a,b, a ^ b);
   printf("~%d = %d \n", a,~a);
   printf("%d<<3 = %d \n", a,a<<3);
   printf("%d>>3 = %d \n", a,a>>3);

   return 0;
}
