#include <stdio.h>

int main(){
  int n, count = 1;
  printf("n = "); scanf("%d",&n);
  // Ve than cay
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n-i; j++){
      printf(" ");
    }
    for(int t = 1; t <= count; t++){
      printf("*");
    }
    count += 2;
    printf("\n");
  }
  // Ve goc cay
  for(int i = 1; i <= n-2; i++){
    printf(" ");
  }
  printf("|||\n");
  return 0;
}