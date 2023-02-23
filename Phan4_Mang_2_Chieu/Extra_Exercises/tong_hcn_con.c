#include <stdio.h>

int main(){
  int m, n, a[50][50];
  int q, i, j, k, l;
  int count = 1;
  // Nhap so hang va so cot cua ma tran
  printf("m = "); scanf("%d",&m);
  printf("n = "); scanf("%d",&n);
  printf("\n-------------------------------\n");
  // Nhap ma tran
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("a[%d][%d] = ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n-------------------------------\n");
  // Xuat ma tran 
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("\n-------------------------------\n");
  printf("Nhap q : "); scanf("%d",&q);
  // Truy van q co dang (i,j,k,l)
  // Tinh tong cac phantu cua hcn con
  while(count <= q) {
    printf("\nNhap i,j,k,l lan %d: \n",count);
    scanf("%d%d%d%d",&i,&j,&k,&l);

    int s = 0;
    for(int x = i; x <= k; x++){
      for(int y = j; j <= l; j++){
        s += a[x][y];
      }
    }
    count++;
    printf("S = %d\n",s);
  }

  return 0;
}