#include <stdio.h>
#include <math.h>
int main() {
    long long n;
    long long chan = 0, le = 0;
    scanf("%lld", &n);
    if (n == 0) {
        chan = 0;
    } else {
        while (n > 0) {
            int digit = n % 10; 
            
            if (digit % 2 == 0) {
                chan += digit; 
            } else {
                le += digit;  
            }

            n /= 10; 
        }
    }

    printf("%lld\n%lld", chan, le);

    return 0;
}
