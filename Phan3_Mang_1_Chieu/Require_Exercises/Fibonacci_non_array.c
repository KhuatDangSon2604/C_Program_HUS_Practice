#include <stdio.h>

int main(){
  int n, f0 = 0, f1 = 1, f = 1;
  printf("n = "); scanf("%d",&n);
  printf("\n------------------\n");
  // Tim so Fibonacci
  if(n == 0) f = f0;
  else if(n == 1) f = f1;
  else{
    for(int i = 2; i < n; i++){
     f0 = f1;
     f1 = f;
     f = f0 + f1;
   } 
  }
  // In ra gia tri can tim
  printf("Phan tu Fibonacci thu %d la : %d",n,f);
  return 0;
}