# Kondisional if

## Sintak Dasar
Suatu saat kita ingin melakukan validasi dimana hasilkan akan menentukan aksi yang akan dilakukan. Misalkan jika temperatur diatas 70^C maka akan diturunkan suhunya. Dalam pemrograman C, kita dapat melakukan dengan menggunakan sintak if. Berikut ini sintak umumnya:

    if(kondisi) {
        // lakukan sesuatu

    }


Contoh realisasinya sebagai berikut, [ifconditional.c](../src/ifconditional.c).

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

Anda perhatikan diatas disana ada sintak else. Sintak digunakan ketika kondisi if tidak terpenuhi maka akan dieksekusi kode program didalam else.


## nested-if

Kita juga dapat membuat nested-if dimana setelah else dilakukan pengecekan kondisi. Perhatikan contoh dibawah ini.

    if(num<=100 && num>80) {
        printf("Nilai A");
    }else 
        if(num<=80 && num>70) {
            printf("Nilai B");
        }else
            if(num<=70 && num>55) {
                printf("Nilai C");
            }else {
                printf("Nilai D");
            }
            

[![Kembali ke menu utama](images/back.png "Kembali menu utama")](/README.md)