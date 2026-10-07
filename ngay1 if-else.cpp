#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c, d;
	char kitu;
	float f;
	printf ("nhap gia tri lan luot cho a b c d la int:");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	printf("Gia tri cua a b c d ll la:%d %d %d %d",a,b,c,d);
	if ((a+b+c+d) % 2 == 0){
		printf("\nnhap ki tu :");
		scanf(" %c",&kitu);
		printf("ki tu la:%c",kitu);
	}
	else if ((a+b+c+d) % 2 != 0){
			printf("\nnhap gia tri so thuc cho f:");
			scanf(" %f",&f);
			printf("Gia tri cua f:%.2f",f);
		}
		if((kitu>=65) && (kitu <=90)){
			printf("\nKi tu in hoa");
		}
		else if((kitu>=97)&&(kitu<=122)){
			printf("\nKi tu in thuong");
		}
		if ((f/2 !=0) || (f/3!=0)){
			float A=1.0*f/a, B=1.0*f/b, C=1.0*f/c, D=1.0*f/d;
			printf("\nket qua cua phep chia voi a b c d la:%f %f %f %f", A, B, C, D);
		}
		else if((f*2 >=6*1.0) || (f*3>=7*1.0)){
			printf("\nKet qua cua f tang 1:%f",++f);
		}
		
	return 0;
}
