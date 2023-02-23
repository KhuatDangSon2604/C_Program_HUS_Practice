#include <stdio.h>

int main(){
  int n, a[50][50], sum = 0;
  printf("n = "); scanf("%d",&n);
  printf("\n-------------------------\n");
  // Nhap ma tran
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("a[%d][%d] = ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n-------------------------\n");
  // Xuat ma tran
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("\n-------------------------\n");
  // Tinh tong cac phan tu duong cheo chinh
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i == j){
        sum += a[i][j];
      }
    }
  }
  printf("Tong cac phan tu tren duong cheo chinh : %d\n",sum);
  return 0;
}