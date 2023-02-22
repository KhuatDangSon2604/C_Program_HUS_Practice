#include <stdio.h>
#include <math.h>
#define eps 1e-9

int main(){
  double x, s, t, ts, ms; int sign = -1, i = 1;
  printf("x(radian) = "); scanf("%lf",&x);
  s = t = ts = ms = 1; // Khoi tao cac gia tri ban dau
  // Cach tinh cos(x) theo khai trien Taylor
  while(t > eps){
    t = (ts*=x*x)/(ms*=(2*i-1)*(2*i));
    s += sign*t;
    sign *= -1;
    i++;
  }
  printf("\n--------------------------\n");
  printf("\ncos(%.3lf) theo Taylor : %.12lf\n",x,s);
  printf("\ncos(%.3lf) theo math.h : %.12lf\n",x,cos(x));
  printf("\n--------------------------\n");
  return 0;
}