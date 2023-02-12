#include <stdio.h>
#include <math.h>

int main(){
  int x;
  printf("x = "); scanf("%d",&x);
  int y = sqrt(x);
  // Check xem co phai so chinh phuong ko
  if(y*y == x) printf("YES");
  else printf("NO");
  printf("\n---------------\n");
  return 0;
}