#include <stdio.h>

int main(){
  int n, count = 1;
  printf("n = "); scanf("%d",&n);
  while(n >= 10){
    n = n/10;
    count++;
  }
  printf("so chu so cua n : %d",count);
  return 0;
}