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
  // Tao ra mang b co cac phan tu bang 1
  int b[15];
  for(int i = 0; i < n; i++){
    b[i] = 1;
  }
  // Tinh so phan tu trung nhau lien tiep
  for(int i = 0; i < n; i++){
    if(a[i] == a[i+1]){
      b[i+1] = b[i] + 1;
    }
  }
  // Tim so phan tu bang nhau
  int length = 1;
  for(int i = 0; i < n; i++){
    if(b[i] > length){
      length = b[i];
    }
  }
  // In ra
  printf("\nDo dai doan con : %d",length);
  printf("\n--------------------------\n");
  for(int i = 0; i < n; i++){
    if(b[i] == length){
      printf("\nVi tri bat dau : %d",i+2-length);
      printf("\nvi tri ket thuc : %d",i+1);
    }
  }
  return 0;
}