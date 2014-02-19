# Menampilkan Text ke Layar

## Menampilkan Text ke Layar

Seperti yang pernah dibuat pada Hello World dimana kita menampikan ke layar. Disini kita menggunakan printf(). Contoh sintaknya:

    printf("Selamat datang di C");


Jika ingin setelah menampilkan tulisan tersebut, kursor diarahkan ke kiri bawah maka kita dapat menambahkan "\r\n", contoh penggunaannya:

    printf("Selamat datang di C \r\n");
    
    
## Menyisipkan karakter atau Bilangan

Misalkan kita ingin menampilkan nilai temperatur yang diperolah dari pengukuran dan menampikan ke layar.

    int temperatur = 10; // bisa dari hasil pengukuran
    printf("Temperatur: %d \r\n", temperatur);
    
Anda perhatikan nilai %d menunjukkan suatu bilangan yang akan disisipkan. Berikut ini yang perlu dihafalkan.
* %d dan %i digunakan untuk bilangan int
* %x untuk menampilkan bilangan hex
* %o untuk menampilkan bilangan octal
* %s untuk string
* %f untuk decimal floating point

