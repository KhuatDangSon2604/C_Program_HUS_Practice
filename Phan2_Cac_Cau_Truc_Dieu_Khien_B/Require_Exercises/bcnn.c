#include <stdio.h>

int main(){
  int a, b, r;
  printf("a = "); scanf("%d",&a);
  printf("b = "); scanf("%d",&b);
  int b_copy = b, a_copy = a;
  if(a > b) r = a % b;
  else if(a <= b) {
    r = b % a;
  }
  while(r > 0){
    a = b;
    b = r;
    r = a % b;
  }
  printf("bcnn = %d",a_copy*b_copy/b);
}