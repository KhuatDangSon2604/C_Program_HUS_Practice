#include <stdio.h>

int main(){
  int a, b, c, d;
  printf("a = "); scanf("%d",&a);
  printf("b = "); scanf("%d",&b);
  printf("c = "); scanf("%d",&c);
  printf("d = "); scanf("%d",&d);
  printf("\n-----------------------\n");
  // Tim max, min sau do moi tim max_2nd
  int max = a, min = a;
  // Tim max
  if(max < b) max = b;
  if(max < c) max = c;
  if(max < d) max = d;
  // Tim min
  if(min > b) min = b;
  if(min > c) min = c;
  if(min > d) min = d;
  // Tim max_2nd
  int max2 = min;
  if(max2 < a && a != max) max2 = a;
  if(max2 < b && b != max) max2 = b;
  if(max2 < c && c != max) max2 = c;
  if(max2 < d && d != max) max2 = d;
  printf("so lon thu 2 trong (a,b,c,d) la : %d",max2);
  return 0;
}