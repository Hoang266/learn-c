#include <stdio.h>
#include <math.h>
int main (){
	int n;
	long long sum =0;
	scanf("%d",&n);
	for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= i; // N?u i ch?n thì tr? i
        } else {
            sum += i; // N?u i l? thì c?ng i
        }
    }
	printf("%lld",sum);
	return 0;
}
