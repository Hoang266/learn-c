#include <stdio.h>
#include <math.h>
int main(){
	int a;
	long long c=0;
	scanf("%d",&a);
	lai:
	if(a==0){
		printf("tong:%lld",c);
	}
	else{
		c=c+a;
		a=a-1;
		goto lai;
	}
	return 0;
}
