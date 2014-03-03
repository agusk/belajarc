#include <stdio.h>
 
int main ()
{

    int numbers[10];
    int i;

    // isi data
    for(i=0;i<10;i++) {
        numbers[i] = i*2 + 5;
    }

    // menampilkan data
    for(i=0;i<10;i++) {
        printf("numbers[%d] = %d \n", i, numbers[i]);
    }

      
    return 0;
}
