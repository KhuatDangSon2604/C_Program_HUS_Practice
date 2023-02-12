#include <stdio.h>

int main(){
  int a = 0, b = 4, c = 8, y = 0;
  printf("\nGia tri ban dau : a = %d, b = %d, c = %d, y = %d",a,b,c,y);
  y=a++||b++;
  printf("\na) y=a++||b++ -> a = %d, b = %d, c = %d, y = %d",a,b,c,y);
  return 0;
}