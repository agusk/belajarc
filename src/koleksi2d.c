#include <stdio.h>
 
int main ()
{

    int numbers[5][4];
    int i,j;

    // isi data
    for(i=0;i<5;i++) {
        for(j=0;j<4;j++) {
            numbers[i][j] = i*2 + 3*j;
        }

    }

    // menampilkan data
    for(i=0;i<5;i++) {
        for(j=0;j<4;j++) {
            printf("numbers[%d][%d] = %d \n", i,j, numbers[i][j]);
        }

    }

      
    return 0;
}
