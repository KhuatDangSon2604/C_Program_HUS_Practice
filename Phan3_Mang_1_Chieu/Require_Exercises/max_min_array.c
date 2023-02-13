#include <stdio.h>

int main(){
  int a[50], n, max, min;
  printf("n = "); scanf("%d",&n);
  printf("\n-------------------\n");
  // Nhap Day
  for(int i = 0; i < n; i++){
    printf("\nNhap phan tu thu %d : ",i+1);
    scanf("%d",&a[i]);
  }
  printf("\n-------------------\n");
  // Xuat Day
  printf("\nDay vua nhap la : \n");
  for(int i = 0; i < n; i++){
    printf("%d ",a[i]);
  } 
  printf("\n-------------------\n");
  // Max, min
  max = a[0], min = a[0];
  // Tim max
  for(int i = 0; i < n; i++){
    if(max < a[i]) max = a[i];
    if(min > a[i]) min = a[i];
  }
  // In ra man hinh
  printf("\nmax = %d, min = %d",max,min);
  return 0;
}