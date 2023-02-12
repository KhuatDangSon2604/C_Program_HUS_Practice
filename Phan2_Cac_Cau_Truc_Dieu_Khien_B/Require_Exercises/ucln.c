#include <stdio.h>

int main(){
  int a, b, ucln, r;
  printf("a = "); scanf("%d",&a);
  printf("b = "); scanf("%d",&b);
  if(a > b) r = a % b;
  else if(a < b) r = b % a;
  else ucln = a;
  while(r > 0){
    a = b;
    b = r;
    r = a % b;
  }
  printf("ucln = %d",b);
}