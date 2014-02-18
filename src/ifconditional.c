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