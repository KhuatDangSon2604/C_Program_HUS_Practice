#include <stdio.h>

int main(){
  // W : Wilbur, O: Orville
  int dayW, monthW, yearW, dayO, monthO, yearO;
  printf("nhap lan luot ngay, thang, nam sinh cua Wilbur : ");
  scanf("%d%d%d",&dayW,&monthW,&yearW);
  printf("nhap lan luot ngay, thang, nam sinh cua Orville : ");
  scanf("%d%d%d",dayO,monthO,yearO);
  if(yearW < yearO){
    printf("WILBUR IS THE ELDER BROTHER");
  }
  else if(yearW > yearO){
    printf("ORVILLE IS THE ELDER BROTHER");
  }
  else{
    if(monthW < monthO){
      printf("WILBUR IS THE ELDER BROTHER");
    }
    else if(monthW > monthO){
      printf("ORVILLE IS THE ELDER BROTHER");
    }
    else{
      if(dayW < dayO){
        printf("WILBUR IS THE ELDER BROTHER");
      }
      else if(dayW > dayO){
        printf("ORVILLE IS THE ELDER BROTHER");
      }
      else{
        printf("NOT ENOUGH DATA");
      }
    }
  }
  return 0;
}