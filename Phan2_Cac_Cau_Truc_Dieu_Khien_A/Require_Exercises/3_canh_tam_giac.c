#include <stdio.h>

int main(){
  int a, b, c;
  printf("a = "); scanf("%d",&a);
  printf("b = "); scanf("%d",&b);
  printf("c = "); scanf("%d",&c);
  printf("\n-----------------------\n");
  // Check xem co phai 3 canh tam giac khong
  if(a + b > c && b + c > a && c + a > b){
    printf("YES");
  }else{
    printf("NO");
  }
  printf("\n-----------------------\n");
  return 0;
}