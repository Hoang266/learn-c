#include <stdio.h>

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    long long count = n / 2;
    printf("%lld\n", count);

    if (n % 2 != 0) {
        for (long long i = 0; i < count - 1; i++) {
            printf("2 ");
        }
        printf("3");
    } 
    else {
        for (long long i = 0; i < count; i++) {
            printf("2 ");
        }
    }

    return 0;
}
