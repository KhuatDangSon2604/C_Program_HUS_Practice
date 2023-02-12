#include <stdio.h>

int main(){
  int ga, cho;
  for(ga = 0; ga <= 36; ga++){
    for(cho = 0; cho <= 36; cho++){
      if((ga+cho==36)&&(2*ga+4*cho==100)){
        printf("ga = %d\ncho = %d",ga,cho);
      }
    }
  }
  return 0;
}