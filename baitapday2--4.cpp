#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Bai 4\n");
	printf("Nhap gia tri ll la phai trai so lan:");
	scanf("%d %d %d", &a, &b, &c);
	if(c%2==0){
		int vitri = c/2*(a-b);
		printf("Vi tri frog:%d",vitri);
	}
	else if(c%2!=0){
		int vitri= ((c+1)/2)*a - (c/2*b);
			printf("Vi tri frog:%d",vitri);
	}
		return 0;
}

