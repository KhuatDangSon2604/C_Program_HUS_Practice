#include <stdio.h>
#include <math.h>

int main(void) {
  /* ===== Khoi tao cac bien ===== */
  int x1, y1, x2, y2, x3, y3;

  /* ===== Nhap ===== */
  printf("Nhap A(x1, y1): "); scanf("%d%d",&x1,&y1);
  printf("Nhap B(x2, y2): "); scanf("%d%d",&x2,&y2);
  printf("Nhap C(x3, y3): "); scanf("%d%d",&x3,&y3);

  /* ===== Xac dinh toa do cua hinh chu nhat bao quanh tam giac tren ===== */
  int x_max = x1, x_min = x1;
  int y_max = y1, y_min = y1;

  // Tim x_max
  if(x_max < x2) x_max = x2;
  if(x_max < x3) x_max = x3;
  // Tim x_min
  if(x_min > x2) x_min = x2;
  if(x_min > x3) x_min = x3;

  // Tim y_max
  if(y_max < y2) y_max = y2;
  if(y_max < y3) y_max = y3;
  // Tim y_min
  if(y_min > y2) y_min = y2;
  if(y_min > y3) y_min = y3;

  /* ===== Tinh khoang cách t?ng c?nh c?a tam giac ABC ===== */
  float ab = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  float bc = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
  float ca = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
  float p = (ab+bc+ca)/2;

  float s = sqrt(p*(p-ab)*(p-bc)*(p-ca));

  /* ===== Tinh dien tich OAB + OBC + OCA ===== */
  float oa = sqrt(x1*x1+y1*y1);
  float ob = sqrt(x2*x2+y2*y2);
  float oc = sqrt(x3*x3+y3*y3);

  // Tinh dien tich oab, obc, oca 
  float p1 = (oa+ab+ob)/2;
  float p2 = (ob+oc+bc)/2;
  float p3 = (oa+oc+ca)/2;

  float s1 = sqrt(p1*(p1-oa)*(p1-ob)*(p1-ab));
  float s2 = sqrt(p2*(p2-ob)*(p2-oc)*(p2-bc));
  float s3 = sqrt(p3*(p3-oa)*(p3-oc)*(p3-ca));

  /*********************************************
    Xac dinh so mien ma hinh chu nhat kia de len 
    -> So mien tam giac de len (chu y xet truong hop de len 4 mien)
  *********************************************/
  if(x_max*x_min<0) {
    if(y_max*y_min<0) {
      if((s1+s2+s3 == s)) {
        printf("De len 4 mien !!!");
      }
      else {
        printf("De len 3 mien !!!");
      }
    }
    else {
      printf("De len 2 mien !!!");
    }
  }
  else {
    if(y_max*y_min<0) {
      printf("De len 2 mien !!!");
    }
    else {
      printf("De len 1 mien !!!");
    }
  }
  return 0;
}
