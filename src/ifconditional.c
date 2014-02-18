#include <stdio.h>

int main(int argc, const char* argv[]) {
  int temperatur = 80;

  if(temperatur > 70) {
    printf("Temperatur diatas 70^C \r\n");
  }else {
    printf("Temperatur dibawah atau sama dengan 70^C \r\n");
  }

  return 0;
}