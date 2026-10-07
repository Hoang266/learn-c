	#include <stdio.h>
	#include <math.h>
	int main(){
		int a=12,b=5, tong = a+b;
		float thuong = (1.0*a)/b;
		char c;
		printf("Hello world!\n");
		printf("Nhap gia tri cho c:");
		scanf("%c",&c);
		printf("ket qua cua c:%c",c);
		printf("\nTong:%d \t Thuong:%.2f", tong, thuong);
		return 0;
	}
