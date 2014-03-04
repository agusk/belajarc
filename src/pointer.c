#include <stdio.h>
 
int main ()
{
    int num = 10;
    int *pnum;

    pnum = &num; // num memberikan alamat memory ke pnum
    // check alamat memory. Hasilnya akan sama
    printf("alamat memory pnum %p \n", pnum);
    printf("alamat memory &num %p \n", &num);

    // menampilkan nilai pnum
    printf("nilai pnum %d \n", *pnum);
    printf("nilai num %d \n", num);
      
   return 0;
}
