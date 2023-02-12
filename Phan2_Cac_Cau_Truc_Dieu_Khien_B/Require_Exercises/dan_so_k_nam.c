#include <stdio.h>
#include <math.h>

int main(){
  int k;
  float m, n;
  printf("n = "); scanf("%f",&n);
  printf("m = "); scanf("%f",&m);
  printf("k = "); scanf("%d",&k);
  for(int i = 1; i <= k; i++){
    n = n*(1+m/100);
  }
  printf("dan so sau %d nam : %.0f",k,round(n));
  return 0;
}