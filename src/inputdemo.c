#include <stdio.h>

int main ()
{
  char name [30];
  int age;

  printf ("Nama: ");
  scanf ("%29s",name);  
  printf ("Umur: ");
  scanf ("%d",&age);
  printf ("%s , Umur anda adalah %d tahun.\n",name,age);
  
  return 0;
}