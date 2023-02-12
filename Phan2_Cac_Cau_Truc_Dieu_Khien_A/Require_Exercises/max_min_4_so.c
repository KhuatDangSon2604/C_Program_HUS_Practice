#include <stdio.h>

int main(){
  int a, b, c, d;
  printf("a = "); scanf("%d",&a);
  printf("b = "); scanf("%d",&b);
  printf("c = "); scanf("%d",&c);
  printf("d = "); scanf("%d",&d);
  printf("\n---------------------\n");
  // Tim max min
  int max = a, min = a;
  // max
  if(max < b) max = b;
  if(max < c) max = c;
  if(max < d) max = d;
  // min
  if(min > b) min = b;
  if(min > c) min = c;
  if(min > d) min = d;
  // In ra ket qua
  printf("max(a,b,c,d) = %d\nmin(a,b,c,d) = %d",max,min);
  printf("\n---------------------\n");
  return 0;
}