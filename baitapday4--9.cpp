#include <stdio.h>
#include <math.h>
int main (){
	int a;
	long long sum =0;
	scanf("%d",&a);
	for( int i=1; i<=a; i++ ){
		sum+=(long long)pow(i,3);
		}
		printf("%lld",sum);
	return 0;
}
