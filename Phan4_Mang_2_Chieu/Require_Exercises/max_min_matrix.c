#include <stdio.h>

int main(){
  int m, n, a[50][50];
  printf("m = "); scanf("%d",&m);
  printf("n = "); scanf("%d",&n);
  printf("\n-----------------------------\n");
  // Nhap ma tran
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("a[%d][%d] = ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n-----------------------------\n");
  // Xuat ma tran
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("\n-----------------------------\n");
  // Tim phan tu max, min
  int max, min;
  max = a[0][0], min = a[0][0];
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(max < a[i][j]) max = a[i][j]; // Tim max
      if(min > a[i][j]) min = a[i][j]; // Tim min
    }
  }
  printf("max = %d\nmin = %d",max,min);
  return 0;
}