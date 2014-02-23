#include <stdio.h>
 
int main ()
{
   // ganti nilai ini sesuai dengan keinginan	
   char nilai = 'C';
   int level = 10;
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
      switch(level)
	  {
		case 10:			
			printf("level 10");
			break;			
		case 15:			
			printf("level 15");
			break;
		case 20:			
			printf("level 20");
			break;
	  }
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