#include <stdio.h>

int main(){
  int n, a[50];
  printf("n = "); scanf("%d",&n);
  printf("\n-------------------\n");
  // Tim so Fibonacci
  a[0] = 0, a[1] = 1;
  for(int i = 2; i <= n; i++){
    a[i] = a[i-1] + a[i-2];
  }
  printf("So Fibonacci thu %d la : %d",n,a[n]);
  return 0;
}