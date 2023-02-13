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
  // Thuat toan sap xep tang dan
  for(int i = 0; i < n-1; i++){
    for(int j = i+1; j < n; j++){
      if(a[i] > a[j]){
        double temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  // In ra man hinh
  printf("\nMang sap xep theo thu tu tang dan :\n\n");
  for(int i = 0; i < n; i++){
    printf("%.3lf\t",a[i]);
  }
  return 0;
}