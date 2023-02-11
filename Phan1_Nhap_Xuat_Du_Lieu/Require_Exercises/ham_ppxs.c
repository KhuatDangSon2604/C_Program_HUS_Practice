#include <stdio.h>
#include <math.h>

int main(){
  float x, o, mu;
  printf("x = "); scanf("%f",&x);
  printf("o = "); scanf("%f",&o);
  printf("mu = "); scanf("%f",&mu);
  printf("\n-------------------\n");
  float f = exp(-1*pow((x-mu)/o,2)/2)/(o*sqrt(2*M_PI));
  printf("f(x) = %f",f);
  return 0;
}