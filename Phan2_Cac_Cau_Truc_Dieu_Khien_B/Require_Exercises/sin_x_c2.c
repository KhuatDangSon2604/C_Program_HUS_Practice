#include <stdio.h>
#include <math.h>
#define eps 1e-9

int main(){
  double x, s, t, ts, ms; int sign = -1;
  printf("x(radian) = "); scanf("%lf",&x);
  ms = 1, t = ts = s = x; // Khoi tao cac gia tri ban dau 
  // Cach tim x theo cong thuc taylor : sin(x) = x - x^3/3! + x^5/5! - ...
  for(int i = 3; t > eps; i += 2){
    t = (ts*=x*x)/(ms*=(i-1)*i);
    s += sign*t;
    sign *= -1;
  }
  printf("\n--------------------------\n");
  printf("\nsin(%.3lf) theo cong thuc Taylor : %.12lf\n",x,s);
  printf("\nsin(%.3lf) tinh theo ham Math : %.12lf\n",x,sin(x));
  printf("\n--------------------------\n");
  return 0;
}