#include <stdio.h>
#include <math.h>
#define eps 1e-9

int main(){
  double x, ts, ms, s, t;
  printf("x = "); scanf("%lf",&x);
  ts = ms = s = t = 1;
  for(int i = 1; t > eps; i++){
    t = (ts *= x)/(ms *= i);
    s += t;
  }
  printf("\ne^x (taylor) = %.12lf",s);
  printf("\ne^x (math.h) = %.12lf",exp(x));
  return 0;
}