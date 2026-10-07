#include <stdio.h>

int main() {
    long long n;
    long long a = 0; 

    scanf("%lld", &n);

        while (n > 0) {
            long long tinh = n % 10;
			if (tinh ==2){
                a += 1;
            }
            else if (tinh ==3){
                a += 1;
            }
            else if((tinh%2!=0) && (tinh %3!=0) && (tinh!=1)){
            	a+=1;
			}
            
            n /= 10;
        }
    printf("%lld ", a);
    
    return 0;
}
