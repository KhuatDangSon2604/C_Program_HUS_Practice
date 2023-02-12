#include <stdio.h>

int main(){
  int n, check = 1;
  printf("n = "); scanf("%d",&n);
  for(int i = 2; i <= n-1; i++){
    if(n % i == 0){
      check ++;
    }
  }
  if(check == 1){
    printf("YES");
  }else{
    printf("NO");
  }
  return 0;
}