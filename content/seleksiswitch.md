# Seleksi dengan switch

## Penggunaan switch

Kita dapat melakukan seleksi suatu nilai dengan memanfaatkan sintak switch. Misalkan kita menyeleksi suatu nilai dan menampilkan responnya ke layar. Sintak dasarnya sebagai berikut.

	switch(ekspresi)
	{
		case nilai-ekspresi:
				// lakukan sesuatu
				break;
		case nilai-ekspresi:
				// lakukan sesuatu
				break;
		defaut:
				// lakukan sesuatu

	}


Bagaimana cara menggunakannya? Berikut ini contoh realiasiasinya ([switchdemo.c](../src/switchdemo.c)).

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

Pada kode program diatas kita melihat bahwa nilai D dan E akan menampilkan tampilan yang sama ke layar.

Simpan kode program ini dan lakukan kompilasi.

	$ gcc -o switchdemo switchdemo.c

Dan selanjutnya lakukan eksekusi.

	$ ./switchdemo

Contoh hasil eksekusi.

	$ ./switchdemo
	Nilai: C
	Cukup

Ganti nilai dari variabel nilai dan lakukan kompilasi. Kemudian eksekusi.

## Nested switch

Kita dapat menggunakan nested switch dimana didalam switch didalamnya ada switch. Berikut ini contoh ilustrasinya ([nestedswitch.c](../src/nestedswitch.c)).


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


[![Kembali ke menu utama](images/back.png "Kembali menu utama")](/README.md)