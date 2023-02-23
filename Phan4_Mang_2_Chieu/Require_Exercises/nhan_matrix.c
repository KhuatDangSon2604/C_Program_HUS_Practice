#include <stdio.h>

int main(){
  int a[50][50], b[50][50], c[50][50];
  int m, n, p, q;
  printf("Nhap ma tran a[][]\n\n");
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
  // Xet tich 2 ma tran a[][] va b[][]
  if(n != p){
    printf("INVALID\n");
  }else{
    // Tinh tich cua 2 ma tran
    for(int i = 0; i < m; i++){
      for(int j = 0; j < q; j++){
        c[i][j] = 0;
        for(int k = 0; k < n; k++){
          c[i][j] += a[i][k]*b[k][j];
        }
      }
    }
    // In ra ma tran tich
    printf("Tich cua 2 ma tran a[][] va b[][] la :\n");
    for(int i = 0; i < m; i++){
      for(int j = 0; j < q; j++){
        printf("%d\t",c[i][j]);
      }
      printf("\n");
    }
  }

  return 0;
}