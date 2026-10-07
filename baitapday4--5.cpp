#include <stdio.h>
#include <math.h>
int main (){
	int a;
	double sum =0;
	scanf("%d",&a);
	for( int i=2; i<=a; i+=2 ){
	sum += 1.0/i;
		}
		printf("%.3f",sum);
	return 0;
}
