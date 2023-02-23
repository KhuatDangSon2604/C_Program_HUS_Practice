#include <stdio.h>

int main(){
  int m, n, p, q, a[50][50], b[50][50];
  printf("Nhap ma tran a[][]n\n");
  printf("m = "); scanf("%d",&m);
  printf("n = "); scanf("%d",&n);
  printf("\n-------------------------\n");
  // Nhap ma tran a[][]
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("a[%d][%d] = ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n-------------------------\n");
  // Xuat ma tran a[][]
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("\n-------------------------\n");
  // Ma tran b[][]
  printf("Nhap ma tran b[][]\n\n");
  printf("p = "); scanf("%d",&p);
  printf("q = "); scanf("%d",&q);
  printf("\n-------------------------\n");
  // Nhap ma tran b[][]
  for(int i = 0; i < p; i++){
    for(int j = 0; j < q; j++){
      printf("b[%d][%d] = ",i,j);
      scanf("%d",&b[i][j]);
    }
  }
  printf("\n-------------------------\n");
  // Xuat ma tran b[][]
  for(int i = 0; i < p; i++){
    for(int j = 0; j < q; j++){
      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }
  printf("\n-------------------------\n");
  // Kiem tra xem co cong voi nhau duoc khong
  if((m == p) && (n == q)) {
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
        printf("%d\t",a[i][j]+b[i][j]);
      }
      printf("\n");
    }
  }else{
    printf("INVALID\n");
  }
  return 0;
}