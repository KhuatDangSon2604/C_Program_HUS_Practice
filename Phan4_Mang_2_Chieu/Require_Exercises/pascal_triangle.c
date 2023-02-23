#include <stdio.h>

int main(){
  int n, i, j, a[50][50];
  printf("n = "); scanf("%d",&n);
  printf("\n------------------------\n");
  // Cac phan tu 2 canh ben tam giac bang 1, ben trong thi bang tong 2 phan tu lien ke ben tren
  for(i = 0; i < n; i++){
    for(j = 0; j < i+1; j++){
      if((j == 0) && (i == j)){
        a[i][j] = 1;
      }
      else{
        a[i][j] = a[i-1][j-1] + a[i-1][j];
      }
    }
  }

  // In tam giac Pascal
  for(i = 0; i < n; i++){
    for(j = 0; j < i+1; j++){
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}