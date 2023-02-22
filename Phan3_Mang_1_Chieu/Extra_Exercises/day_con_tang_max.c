#include <stdio.h>

int main(){
  int n, a[100], l[100], i, j, maxx;
  printf("n = "); scanf("%d",&n);
  printf("\n--------------------------\n");
  // Nhap mang
  for(int i = 1; i <= n; i++){
    printf("a[%d] = ",i);
    scanf("%d",&a[i]);
  }
  printf("\n--------------------------\n");
  // Xuat mang
  for(int i = 1; i <= n; i++){
    printf("%d ",a[i]);
  }
  maxx = 0; // Gan max = 0
  printf("\n--------------------------\n");
  // tao day ket qua
  for(i = 1; i <= n; i++){
    l[i] = 1;
  }
  // Day con tang dai nhat
  for(i = 1; i < n; i++){
    for(j = i+1; j <= n; j++){
      if((a[j] > a[i]) && (l[j] < l[i]+1)){
        l[j] = l[i] + 1;
      }
      if(maxx < l[j]){
        maxx = l[j]; 
      }
    }
  }
  // In ra ket qua
  printf("Day con don dieu tang dai nhat : %d",maxx);
  printf("\n--------------------------\n");
  return 0;
}