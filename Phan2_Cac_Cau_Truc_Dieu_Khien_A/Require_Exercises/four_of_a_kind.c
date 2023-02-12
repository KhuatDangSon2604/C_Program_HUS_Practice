#include <stdio.h>

int main(){
  int a, b, c, d, e;
  printf("a = "); scanf("%d",&a);
  printf("b = "); scanf("%d",&b);
  printf("c = "); scanf("%d",&c);
  printf("d = "); scanf("%d",&d);
  printf("e = "); scanf("%d",&e);
  // Four of a kind
  if(a==b && b==c && c==d && d==e){
    printf("FOUR OF A KIND");
  }
  else{
    if(a==b && b==c && c==d){
      printf("FOUR OF A KIND");
    }
    else if(a==b && b==c && c==e){
      printf("FOUR OF A KIND");
    }
    else if(a==c && c==d && d==e){
      printf("FOUR OF A KIND");
    }
    else if(a==b && b==d && d==e){
      printf("FOUR OF A KIND");
    }
    else if(b==c && c==d && d==e){
      printf("FOUR OF A KIND");
    }
    else{
      printf("HIGH CARD");
    }
  }
  return 0;
}