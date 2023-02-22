#include <stdio.h>
#include <math.h>
#define eps 1e-9

int main(){
  double x, s, t, ts, ms;
  int sign = -1;
  printf("x(radian) = "); scanf("%lf",&x);
  ms = 1;
  t = ts = s = x;
  // Cach tinh sin(x) theo cong thuc ham Taylor
  for(int i = 1; t > eps; i++, sign = -sign){
    t = (ts*=x*x)/(ms*=(2*i)*(2*i+1));
    s += sign*t;    
  }
  printf("\n--------------------------\n");
  printf("\nsin(%.3lf) theo cong thuc Taylor : %.12lf\n",x,s);
  printf("\nsin(%.3lf) tinh theo ham Math : %.12lf\n",x,sin(x));
  printf("\n--------------------------\n");
  return 0;
}