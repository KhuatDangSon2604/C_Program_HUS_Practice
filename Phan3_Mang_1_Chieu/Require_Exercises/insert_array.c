#include <stdio.h>

int main(){
  int n, pos; double a[15], val;
  do{
    printf("\nNhap so phan tu cua mang : ");
    scanf("%d",&n);
  }while(n < 1);
  printf("\n--------------------------\n");
  for(int i = 0; i < n; i++){
    printf("a[%d] = ",i);
    scanf("%lf",&a[i]);
  }
  printf("\n--------------------------\n");
  printf("\nMang vua nhap :\n\n");
  for(int i = 0; i < n; i++){
    printf("%.3lf\t",a[i]);
  }
  printf("\n--------------------------\n");
  printf("\nNhap vi tri can chen : "); scanf("%d",&pos);
  printf("\nNhap gia tri can chen : "); scanf("%lf",&val);
  printf("\n--------------------------\n");
  // Thuat toan de chen phan tu
  for(int i = n; i > pos; i--){
    a[i] = a[i-1];
  }
  a[pos] = val;
  n++;
  // In ra mang sau khi chen
  printf("\nMang sau khi chen them :\n\n");
  for(int i = 0; i < n; i++){
    printf("%.3lf\t",a[i]);
  }
  return 0;
}