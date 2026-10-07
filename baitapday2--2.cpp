#include <stdio.h>
#include <math.h>

int main (){
	
	printf("Bai 2\n");
	unsigned int d,e;
	printf("Nhap gia tri nguyen duong cho d va e:");
	scanf("%u %u", &d, &e);
		if(1 <= d && d <= e && e <= 16){
			printf("Gia tri cua d va e la:%u %u",d ,e);
			int dientich = d*e;
			printf("\nDien tich cua bang la:%d", dientich);
			int domino = dientich/2;
			printf("\nSo domino la:%d", domino);
		}
		else{
			printf("Nhap gia tri nguyen nam trong khoang 1-16");
		}
	return 0;
}
