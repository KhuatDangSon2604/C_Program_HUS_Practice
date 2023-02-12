#include <stdio.h>

int main(){
  int x, i, s;
  printf("x = "); scanf("%d",&x);
  i = 0, s = 0;
  while(s < x){
    i += 1;
    s += i;
  }
  if(s == x){
    printf("YES");
  }else{
    printf("NO");
  }
}