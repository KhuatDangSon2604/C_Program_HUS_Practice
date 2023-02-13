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
  // Thuat toan dao nguoc mang
  for(int i = 0; i <= n/2; i++){
    double temp = a[i];
    a[i] = a[n-1-i];
    a[n-1-i] = temp;
  }
  printf("\nMang sau khi dao nguoc :\n\n");
  for(int i = 0; i < n; i++){
    printf("%.3lf\t",a[i]);
  }
  return 0;
}