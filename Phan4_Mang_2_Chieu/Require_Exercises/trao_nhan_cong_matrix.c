#include <stdio.h>

int main(){
  int m, n, a[50][50];
  // x va y la 2 hang can trao cho nha
  int x, y;
  // nhan hang h voi he so k1
  int k1, h;
  // hang p cong voi k2 lan hang q
  int p, k2, q;
  // Khoi tao bien de chon che do
  char mode;
  // Nhap ma tran
  printf("m = "); scanf("%d",&m);
  printf("n = "); scanf("%d",&n);
  printf("\n-------------------------\n");
  // Nhap ma tran
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("a[%d][%d] = ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n-------------------------\n");
  // Xuat ma tran
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  printf("\n-------------------------\n");
  // Chon che do
  printf("Nhap che do can chon\nS : Trao hang\nM : Nhan\nA: Cong\n");
  printf("Nhap mode : "); scanf("%c",&mode);
  printf("\n-------------------------\n");
  //----------------Chon 2 hang muon trao--------------------
  if(mode == 'S'){
    printf("chon 2 hang can trao :\n");
    scanf("%d%d",&x,&y);

    for(int i = 0; i < n; i++){
      int temp = a[x-1][i];
      a[x-1][i] = a[y-1][i];
      a[y-1][i] = temp;
    }
    printf("\n-------------------------\n");
    printf("Ma tran sau khi trao hang\n\n");
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
        printf("%d\t",a[i][j]);
      }
      printf("\n");
    }
  }
  // ----------------Nhan hang h voi 1 so k1--------------------
  else if(mode == 'M'){
    printf("Chon hang can nhan :\n");
    scanf("%d",&h);
    printf("Nhan hang %d voi so k1 = ",h);
    scanf("%d",&k1);
    
    for(int i = 0; i < n; i++){
      a[h-1][i] = k1*a[h-1][i];
    }

    printf("Ma tran sau khi tang hang %d len %d lan :\n\n",h,k1);
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
        printf("%d\t",a[i][j]);
      }
      printf("\n");
    }
  }
  //----------------Hang p cong voi k2 lan hnag q--------------------
  else if(mode == 'A'){
    printf("Cong hang thu : "); scanf("%d",&p);
    printf("Voi k2 = "); scanf("%d",&k2);
    printf("Hang thu : "); scanf("%d",&q);

    for(int i = 0; i < n; i++){
      a[p-1][i] += k2*a[q-1][i];
    }

    printf("Ma tran sau khi cong hang %d voi %d lan hang %d\n\n",p,k2,q);
    for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
        printf("%d\t",a[i][j]);
      }
      printf("\n");
    }
  }
  //----------------Truong hop khac--------------------
  else {
    printf("INVALID !!!");
  }
  return 0;
}