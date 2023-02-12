#include <stdio.h>

int main(){
  char name[50];
  int birth;
  printf("Nhap ten : "); gets(name);
  printf("Nhap nam sinh : "); scanf("%d",&birth);
  printf("\n-------------------\n");
  printf("%s %d",name,birth);
  printf("\n-------------------\n");
  return 0;
}