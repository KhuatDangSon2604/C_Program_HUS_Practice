#include <stdio.h>
#include <math.h>

int main(){
  int n, m, s = 0;
  int a[10000], l[10000], r[10000];
  printf("n = "); scanf("%d",&n);
  printf("\n--------------------------\n");
  // Nhap mang
  for(int i = 1; i <= n; i++){
    printf("a[%d] = ",i); 
    scanf("%d",&a[i]);
  }
  printf("\n--------------------------\n");
  // Tim nuoc dong
  m = a[1];
  for(int i = 2; i <= n; i++){
    l[i] = m;
    m = fmax(m,a[i]);
  }
  m = a[n];
  for(int i = n-1; i >= 1; i--){
    r[i] = fmin(l[i],m);
    m = fmax(m,a[i]);
  }
  for(int i = 2; i < n; i++){
    if(r[i] > a[i]){
      s += r[i]-a[i];
    }
  }
  printf("Luong nuoc dong : %d",s);
  printf("\n--------------------------\n");
  return 0;
}