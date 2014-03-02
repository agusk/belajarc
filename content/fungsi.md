# Fungsi

## Membuat Fungsi
Ketika kita memiliki kode program dan ini selalu dipanggil dibeberapa tempat pada kode program tersebut maka kita dapat memanfaatkan fungsi. Pada bahasa C kita dapat membuat fungsi dengan sintak dasar:

	tipe_data nama_fungsi(parameter) {
	
		// kode program
	}


Sebagai contohnya kita membuat fungsi add() dimana ini melakukan penjumlahan dari input yang dimasukkan ([fungsi.c](../src/fungsi.c)).


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

Kalau diperhatikan kita mendeklarasikan nama fungsi diatasnya dan realisasinya ada dibagian bawah.

Simpan kode program ini dan lakukan kompilasi.

	$ gcc -o fungsi fungsi.c
	$ ./fungsi


## Fungsi Tanpa Kembalian

Kadangkalanya kita membuat fungsi tanpa mengembalikan nilai. Disini kita cukup menulis **void** pada bagian tipe data fungsi. Contoh deklarasinya.

	void hitung_mobil() {
	
		// implementasi kode program
	
	}


[![Kembali ke menu utama](images/back.png "Kembali menu utama")](/README.md)