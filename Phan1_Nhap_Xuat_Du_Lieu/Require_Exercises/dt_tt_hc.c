#include <stdio.h>

int main(){
  float r, dt, tt;
  printf("r = "); scanf("%f",&r);
  dt = 4*3.14*r*r;
  tt = 4*3.14*r*r*r/3;
  printf("dt = %.3f\ntt = %.3f",dt,tt);
  return 0;
}