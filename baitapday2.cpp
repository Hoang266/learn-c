#include <stdio.h>
#include <math.h>

int main (){
	printf("Bai 1\n");
	int a,b,c;
	printf("Nhap so lieu cho 3 canh hinh hop chu nhat:");
	scanf("%d %d %d",&a ,&b ,&c);
	printf("Gia tri cua 3 canh: %d %d %d",a ,b ,c);
	int tong = a+b+c;
	printf ("\nTong cua tat ca cac canh trong hinh hop chu nhat: %d",tong);
	
	return 0;
}
