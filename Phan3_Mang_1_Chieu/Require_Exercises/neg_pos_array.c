#include <stdio.h>

int main(){
  int a[50], n;
  printf("n = "); scanf("%d",&n);
  printf("\n------------------\n");
  // In mang
  for(int i = 0; i < n; i++){
    printf("\nNhap phan tu thu %d : ",i+1);
    scanf("%d",&a[i]);
  }
  // Xuat mang
  printf("\n------------------\n");
  for(int i = 0; i < n; i++){
    printf("%d ",a[i]);
  }
  printf("\n------------------\n");
  // In ra mang am
  printf("\nMang cac so am : \n");
  for(int i = 0; i < n; i++){
    if(a[i] < 0){
      printf("%d ",a[i]);
    }
  }
  printf("\n------------------\n");
  // In ra mang duong
  printf("\nMang cac so duong : \n");
  for(int i = 0; i < n; i++){
    if(a[i] >= 0){
      printf("%d ",a[i]);
    }
  }
  printf("\n------------------\n");
  return 0;
}