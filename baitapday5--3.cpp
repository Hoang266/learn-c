#include <stdio.h>
#include <math.h>
// Sai lech so

int is_prime(long long n){
	for (long long i=2; i*i<=n ;i++){
	
	if(n%i==0){return 0;
	}	
}
return 1;
}

int kt_tangdan(long long n){
	while (n>10){

	long long last = n%10;
	n/=10;
	long long prev = n%10;
	if (last == prev){
		return 0;
		n/=10;
		continue;
	}
	else if( last < prev){return 0;
	}
}
	return 1;
}

int kt_giamdan(long long n){
	while (n>10){
	long long last= n%10;
	n/=10;
	long long prev = n%10;
	if (last == prev){
		return 0;
		n/=10;
		continue;
	}
	else if( last > prev){return 0;
	}
}
	return 1;
}

int main(){
	int N;
	printf("Nhap gia tri:");
	scanf("%d", &N);
	long long start = double( pow(10,N-1));
	long long end = double (pow(10,N)-1);
	int count =0;
	for (long long i = start; i<=end;i++){
		if ((kt_tangdan(i) || kt_giamdan(i)) && is_prime(i)) {
			count +=1;
		}
	}
	printf("%d",count);
}
