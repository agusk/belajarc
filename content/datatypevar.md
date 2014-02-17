# Tipe Data dan Deklarasi Variabel

Pada bahasa C kita dapat menggunakan beberapa tipe data. Berikut ini tipe data yang sering digunakan:

* int
* char
* float
* double


## Deklarasi Variabel

Untuk mendeklarasikan suatu variabel pada C, kita dapat melakukan dengan menulis sebagai berikut:

    tipe_data nama_variabel;
    
tipe_data merupakan tipe data dari nama_variabel.
Contoh cara deklarasi pada bahasa C.

    int num1;
    int a, b, c;
    char key;
    float deposit;
    

## Initialiasi Nilai Variabel

Kadang kita ingin memberikan nilai ketika variabel dideklarasikan, berikut ini contohnya:

    int a = 1, b = 3, c = 10;
    char key = 'c';
    
Bagaimana dengan ini?

    int a = 10;
    int b = a;
    
Disini nilai b akan sama dengan nilai a yaitu 10.
