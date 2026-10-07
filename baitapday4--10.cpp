#include <stdio.h>
#include <math.h>
int main (){
	int a;
	long long sum =1;
	scanf("%d",&a);
	for( int i=1; i<=a; i++ ){
		sum= sum*i;
		}
		printf("%lld",sum);
	return 0;
}
