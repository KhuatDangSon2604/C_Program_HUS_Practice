#include <stdio.h>
#include <math.h>

int main(){
  float a, b, c, d, x1, x2;
  printf("a = "); scanf("%f",&a);
  printf("b = "); scanf("%f",&b);
  printf("c = "); scanf("%f",&c);
  printf("\n---------------------\n");
  // Giai pt bac 2
  // TH1 : a = 0
  if(a == 0){
    if(b == 0){
      if(c == 0){
        printf("EQUATION HAS INFINITELY MANY SOLUTIONS");
      }else{
        printf("EQUATION HAS NO SOLUTIONS");
      }
    }else{
      printf("x = %.5f",-c/b);
    }
  }
  // TH2 : a != 0
  else{
    d = b*b - 4*a*c;
    if(d < 0){
      printf("EQUATION HAS NO SOLUTIONS");
    }else if(d == 0){
      printf("x1 = x2 = %.5f",-b/(2*a));
    }else{
      x1 = (-b-sqrt(d))/(2*a);
      x2 = (-b+sqrt(d))/(2*a);
      printf("x1 = %.5f\nx2 = %.5f",x1,x2);
    }
  }
  printf("\n---------------------\n");
  return 0;
}