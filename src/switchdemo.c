#include <stdio.h>
 
int main ()
{
   // ganti nilai ini sesuai dengan keinginan	
   char nilai = 'C';
   printf("Nilai: %c\n", nilai );
   
   switch(nilai)
   {
   case 'A' :
      printf("Sempurna, baik sekali!\n" );
      break;
   case 'B' :
	  printf("Baik!\n" );
      break;
   case 'C' :
      printf("Cukup\n" );
      break;
   case 'D' :
   case 'E' :
      printf("Tidak bagus dan tidak lulus\n" );
      break;
   default :
      printf("Nilai tidak tersedia\n" );
   }
   
   return 0;
}