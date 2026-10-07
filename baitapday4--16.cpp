#include <stdio.h>
int main(){
	long long a;
	long long b=0; long long c=0;
	scanf("%lld",&a);
	if (a == 0) {
        b = 1;
    } else {
	while(a>0){
		long long tinh=a%10;
		if(tinh%2==0){
			b+=1;
		}
		else {
			c+=1;
		}
	a/=10;
		
	}
}
		printf("%lld %lld",b,c);
	if(b==c){
		printf("\nLa so dep!");
	}
	else{
		printf("\nKhong la so dep!");
	}

	return 0;
}
