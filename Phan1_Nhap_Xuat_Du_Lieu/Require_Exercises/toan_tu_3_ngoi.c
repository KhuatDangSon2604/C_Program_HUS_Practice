#include <stdio.h>

int main(){
  float x;
  printf("x = "); scanf("%f",&x);
  float f = (x>0)?x*x:x+1;
  printf("f(x) = %f",f);
  return 0;
}