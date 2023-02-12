#include <stdio.h>

int main(){
  int n, s=0;
  while(n != 0){
    printf("n = "); scanf("%d",&n);
    s += n;
  }
  printf("Tong : %d",s);
  return 0;
}