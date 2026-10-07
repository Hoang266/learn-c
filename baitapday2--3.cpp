#include <stdio.h>
#include <math.h>

int main (){
	double a, b, c;
	printf("Nhap gia tri cho canh cua vien gach grafit:");
	scanf("%lf", &a);
	double grafit= pow(a,2);
	printf("\nNhap gia tri cho cac canh hinh chua nhat cua quang truong:");
	scanf("%lf %lf", &b, &c);
	double quangtruong= b*c;
	double d=1e9;
	if(1<=a<=d && 1<=b<=d && 1<=c<=d){
	printf("Dien tich cua vien gach grafit:%0.f", grafit);
	printf("Dien tich cua quang truong: %0.f",quangtruong);
	int viengach = (int)quangtruong / grafit;
}
	else if((b%a !=0) && (c%a !=0) && ){
		int e= viengach+2;
		printf("")
	}
	return 0;
}
