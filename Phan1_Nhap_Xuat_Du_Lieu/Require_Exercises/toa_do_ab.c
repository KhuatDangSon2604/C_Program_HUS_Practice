#include <stdio.h>
#include <math.h>

int main(){
  int x1, y1, x2, y2;
  printf("x1 = "); scanf("%d",&x1);
  printf("y1 = "); scanf("%d",&y1);
  printf("x2 = "); scanf("%d",&x2);
  printf("y2 = "); scanf("%d",&y2);
  printf("\n---------------------\n");
  float ab = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
  printf("AB = %.4f",ab);
  return 0;
}