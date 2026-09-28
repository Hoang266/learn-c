#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	printf("Nha cua varda:");
	long long a,b,c;
	scanf("%lld %lld",&a, &b);
	int d=llabs(a);
	int e=llabs(b);
	printf("Du doan so lan di:");
	scanf("%lld",&c);
		if(( d+e<=c) && ((c-d-e)%2==0)){
			printf("\nYes");
		}
		else{
			printf("No");
		}
		
		
	return 0;
}
