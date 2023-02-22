#include <stdio.h>

int main(){
  int m, n, a[10];
  printf("n = "); scanf("%d",&n);
  printf("m = "); scanf("%d",&m);
  printf("\n--------------------------\n");
  // Nhap mang
  for(int i = 0; i < n; i++){
    printf("a[%d] = ",i);
    scanf("%d",&a[i]);
  }
  printf("\n--------------------------\n");
  // Xuat mang
  printf("Mang vua nhap\n\n");
  for(int i = 0; i < n; i++){
    printf("%d ",a[i]);
  }
  printf("\n--------------------------\n");
  int i_, j_, s = 0;
  // Thuat toan truy van
  for(int i = 0; i < m; i++){
    printf("i = "); scanf("%d",&i_);
    printf("j = "); scanf("%d",&j_);
    for(int j=i_-1; j < j_; j++){
      s += a[j];
    }
    printf("s = %d\n",s);
    printf("\n--------------------------\n");
    s = 0; // Reset s
  }
  return 0;
}