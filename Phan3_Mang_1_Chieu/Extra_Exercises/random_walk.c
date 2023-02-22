#include <stdio.h>
#include <math.h>

int main(){
  int n, a[30], x = 0, y = 0;
  printf("Toa do ban dau : A(%d,%d)\n",x,y);
  printf("\n--------------------------\n");
  printf("n = "); scanf("%d",&n);
  printf("\n--------------------------\n");
  printf("Nhap a[i] trong khoang [0,3]\n");
  for(int i = 0; i < n; i++){
    printf("a[%d] = ",i);
    scanf("%d",&a[i]); 
  }
  printf("\n--------------------------\n");
  // Thuat giai random walk
  for(int i = 0; i < n; i++){
    if(a[i] == 0) {
      x += 1;
    }
    if(a[i] == 1) {
      y += 1;
    }
    if(a[i] == 2) {
      x -= 1;
    }
    if(a[i] == 3) {
      y -= 1;
    }
  }
  printf("Toa do sau %d buoc la : A(%d,%d)",n,x,y);
  printf("\n--------------------------\n");
  printf("Khoang cach trung binh toi cot den : %.3f",1.0*sqrt(x*x+y*y));
  printf("\n--------------------------\n");
  return 0;
}