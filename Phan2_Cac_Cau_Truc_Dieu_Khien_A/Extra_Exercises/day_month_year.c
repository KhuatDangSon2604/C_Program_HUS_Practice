/***************************************
	Nhap vao 1 moc thoi gian. Xac dinh xem hom do la thu may
	Gia su ngay 1/1/1 la Thu Hai.
	----------------------------------------------
	Input :
		22 07 2019
	Output :
		MONDAY
	----------------------------------------------
***************************************/

#include <stdio.h>

int main() {
	int d, m, y;
	/* ===== Nhap moc thoi gian ===== */
	printf("Nhap moc thoi gian (dd/mm/yyyy) : ");
	scanf("%d/%d/%d",&d,&m,&y);
	printf("----------------------------\n");
	/* ===== Xac dinh khoang cach cua moc thoi gian tren voi 1/1/1 ===== */
	int k = d-1;
	
	switch(m) {
		case 1: k += 0; break;
		case 2: k += 31; break;
		case 3: k += (31+28); break;
		case 4: k += (31*2+28); break;
		case 5: k += (31*2+30+28); break;
		case 6: k += (31*3+30+28); break;
		case 7: k += (31*3+30*2+28); break;
		case 8: k += (31*4+30*2+28); break;
		case 9: k += (31*5+30*2+28); break;
		case 10: k += (31*5+30*3+28); break;
		case 11: k += (31*6+30*3+28); break;
		case 12: k += (31*6+30*4+28); break; 
	}
	
	k += 365*(y-1) + y/400 + y/4 - y/100;
	
	/* ===== Xac dinh xem hom do la thu may ===== */
	switch(k%7) {
		case 0: printf("MONDAY"); break;
		case 1: printf("TUESDAY"); break;
		case 2: printf("WEDNESDAY"); break;
		case 3: printf("THURSDAY"); break;
		case 4: printf("FRIDAY"); break;
		case 5: printf("SATURDAY"); break;
		case 6: printf("SUNDAY"); break;
	}
	return 0;
}
