#include <stdio.h>
 
int main ()
{
   // ganti nilai ini sesuai dengan keinginan	
   int a = 10;
   int b = 15;
   
   printf("%d==%d %s \n", a,b,a==b ? "true":"false");
   printf("%d!=%d %s \n", a,b,a!=b ? "true":"false");
   printf("%d>=%d %s \n", a,b,a>=b ? "true":"false");
   printf("%d<=%d %s \n", a,b,a<=b ? "true":"false");
   printf("%d>%d %s \n", a,b,a>=b ? "true":"false");
   printf("%d<%d %s \n", a,b,a<b ? "true":"false");
      
   return 0;
}