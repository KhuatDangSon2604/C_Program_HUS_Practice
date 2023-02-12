#include <stdio.h>
#include <math.h>

int main(){
  float a, b, c, d, e, f, M, N, P, Q, V;
  printf("Nhap lan luot 6 gia tri AB, AC, AD, BC, BD, CD : ");
  scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
  M = a*a*d*d*(b*b+e*e+c*c+f*f-a*a-d*d);
  N = b*b*e*e*(a*a+c*c+d*d+f*f-b*b-e*e);
  P = c*c*f*f*(a*a+b*b+d*d+e*e-c*c-f*f);
  Q = (a*b*c)*(a*b*c) + (a*e*f)*(a*e*f) + (b*d*f)*(b*d*f) + (c*d*e)*(c*d*e);
  V = sqrt(M+N+P-Q)/12;
  printf("The tich cua tu dien ABCD la : %f",V);
  return 0;
}