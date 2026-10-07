#include <stdio.h>
#include <math.h>
int main (){
	int a;
	double sum =0;
	scanf("%d",&a);
	for( int i=1; i<=a; i++ ){
		sum+=1.0/i;
		}
		printf("%.3f",sum);
	return 0;
}
