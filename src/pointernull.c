#include <stdio.h>
 
int main ()
{    
    int *pnum = NULL;

    // check alamat memory
    printf("alamat memory pnum %p \n", pnum);

    // menampilkan nilai pnum
    printf("nilai pnum %d \n", *pnum);    
      
   return 0;
}
