/****************************
	Nhap vao 2 moc thoi gian. 
	Xac dinh khoang cach giua 2 moc thoi gian tren.
	----------------------------------------------
	Input : 
		16 04 1867
		19 08 1871
	Output :
		1000
	----------------------------------------------
****************************/

#include <stdio.h>

int main() {
	int d1, m1, y1;
	int d2, m2, y2;
	
	/* ===== Nhap cac moc thoi gian ===== */
	printf("Nhap moc thoi gian 1 (dd/mm/yyyy) : ");
	scanf("%d/%d/%d",&d1,&m1,&y1);
	printf("Nhap moc thoi gian 2 (dd/mm/yyyy) : ");
	scanf("%d/%d/%d",&d2,&m2,&y2);
	printf("-------------------------------------\n");
	/* ===== Xac dinh khoang cach cua 2 moc thoi gian tren voi 1/1/1 ===== */
	int k1 = (d1-1), k2 = (d2-1);
	
	switch(m1) {
		case 1: k1 += 0; break;
		case 2: k1 += 31; break;
		case 3: k1 += (31+28); break;
		case 4: k1 += (31*2+28); break;
		case 5: k1 += (31*2+30+28); break;
		case 6: k1 += (31*3+30+28); break;
		case 7: k1 += (31*3+30*2+28); break;
		case 8: k1 += (31*4+30*2+28); break;
		case 9: k1 += (31*5+30*2+28); break;
		case 10: k1 += (31*5+30*3+28); break;
		case 11: k1 += (31*6+30*3+28); break;
		case 12: k1 += (31*6+30*4+28); break; 
	}
	
	switch(m2) {
		case 1: k2 += 0; break;
		case 2: k2 += 31; break;
		case 3: k2 += (31+28); break;
		case 4: k2 += (31*2+28); break;
		case 5: k2 += (31*2+30+28); break;
		case 6: k2 += (31*3+30+28); break;
		case 7: k2 += (31*3+30*2+28); break;
		case 8: k2 += (31*4+30*2+28); break;
		case 9: k2 += (31*5+30*2+28); break;
		case 10: k2 += (31*5+30*3+28); break;
		case 11: k2 += (31*6+30*3+28); break;
		case 12: k2 += (31*6+30*4+28); break; 
	}
	
	k1 += 365*(y1-1) + y1/400 + y1/4 - y1/100;
	k2 += 365*(y2-1) + y2/400 + y2/4 - y2/100;
	
	/* ===== Tinh khoang cach ===== */
	printf("Khoang cach giua 2 moc thoi gian tren la : %d",
			(k1<k2)?(k2-k1):(k1-k2));
	
	
	return 0;
}







