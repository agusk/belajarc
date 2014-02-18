# Kondisional if

Suatu saat kita ingin melakukan validasi dimana hasilkan akan menentukan aksi yang akan dilakukan. Misalkan jika temperatur diatas 70^C maka akan diturunkan suhunya. Dalam pemrograman C, kita dapat melakukan dengan menggunakan sintak if. Berikut ini sintak umumnya:

    if(kondisi) {
        // lakukan sesuatu

    }


Contoh realisasinya sebagai berikut.

    #include <stdio.h>

    int main(int argc, const char* argv[]) {
      int temperatur = 70;

      if(temperatur>50) {
        printf("Temperatur diatas 50^C \r\n");
      }else {
        printf("Temperatur dibawah atau sama dengan 50^C \r\n");
      }

      return 0;
    }