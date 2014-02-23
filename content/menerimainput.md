# Menerima Input Keyboard

Kita juga dapat menerima inputan dari keyboard dengan memanfaatkan fungsi scanf.

Berikut ini realisasi dari penggunaan scanf ([inputdemo.c](../src/inputdemo.c)):

	#include <stdio.h>

	int main ()
	{
	  char name [30];
	  int age;
	
	  printf ("Nama: ");
	  scanf ("%29s",name);  
	  printf ("Umur: ");
	  scanf ("%d",&age);
	  printf ("%s , Umur anda adalah %d tahun.\n",name,age);
	  
	  return 0;
	}

Lakukan kompilasi

	$ gcc -o inputdemo inputdemo.c


Selanjutkan lakukan eksekusi

	$ ./inputdemo

Contoh hasil eksekusinya:

	$ ./inputdemo
	Nama: agus
	Umur: 30
	agus , Umur anda adalah 30 tahun.

[![Kembali ke menu utama](images/back.png "Kembali menu utama")](/README.md)