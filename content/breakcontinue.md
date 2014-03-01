# break dan continue

## break

Sintak **break** digunakan untuk menghentikan kode program setelahnya. Sebagai contoh ilustrasi, kita mempunyai looping dan pada saat looping ke 10 maka looping akan berhenti dengan memanggil perintah **break**.

Berikut ini contoh programnya ([break.c](../src/break.c)).

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

Lakukan kompilasi dan eksekusi.

	$ gcc -o break break.c
	$ ./break

Contoh hasil eksekusinya:

	$ ./break
	looping 1
	looping 2
	looping 3
	looping 4
	looping 5
	looping 6
	looping 7
	looping 8
	looping 9
	looping 10


## continue

Sintak **continue** digunakan untuk melanjutkan kode program balik keatas dan mengabaikan kode program dibawahnya. Sebagai contohnya kita memiliki looping sebanyak 10 dan pada looping ke-5 kita memanggil **continue** maka kode program setelah akan dilewati atau diabaikan.

Berikut ini contoh programnya ([continue.c](../src/continue.c)).


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

Lakukan kompilasi dan eksekusi.

	$ gcc -o continue continue.c
	$ ./continue

Contoh hasil eksekusinya:

	$ ./continue
	looping 1
	looping 2
	looping 3
	looping 4
	looping 6
	looping 7
	looping 8
	looping 9
	looping 10
	looping 11

Anda perhatikan outputnya, disana pada index ke-5 tidak dilakukan penampilan.


[![Kembali ke menu utama](images/back.png "Kembali menu utama")](/README.md)