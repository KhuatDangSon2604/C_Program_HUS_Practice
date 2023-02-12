#include <stdio.h>

int main(){
  int n1, n2, n, count = 1;
  printf("n1 = "); scanf("%d",&n1);
  printf("n2 = "); scanf("%d",&n2);
  // Kiem tra cac so nguyen to trong [n1,n2]
  for(n = n1; n <= n2; n++){
    int check = 1;
    for(int i = 2; i <= n-1; i++){
      if(n % i == 0){
        check++;
      }
    }
    // In ra cac so la so nguyen to
    if(check == 1){
      printf("%d ",n);
      count++;
      if(count % 10 == 0){
       printf("\n");
      }
    }
        
  } 
  


  return 0;
}