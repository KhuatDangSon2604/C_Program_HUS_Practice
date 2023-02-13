#include <stdio.h>

int main(){
  int n; double a[15];
  do{
    printf("\nNhap so phan tu cua mang : ");
    scanf("%d",&n);
  }while(n < 1);
  printf("\n--------------------------\n");
  for(int i = 0; i < n; i++){
    printf("\na[%d] = ",i);
    scanf("%lf",&a[i]);
  }
  printf("\n--------------------------\n");
  printf("\nMang vua nhap :\n\n");
  for(int i = 0; i < n; i++){
    printf("%.3lf\t",a[i]);
  }
  printf("\n--------------------------\n");
  printf("\nMang sau khi dao nguoc :\n\n");
  for(int i = n-1; i >= 0; i--){
    printf("%.3lf\t",a[i]);
  }
  return 0;
}