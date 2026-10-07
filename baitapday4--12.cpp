#include <stdio.h>
#include<math.h>
int main() {
    long long n ;
    int count = 0;
	scanf("%lld",&n);
    // Trong khi n v?n còn l?n hon 0
    if (n == 0) {
        printf("Chu so:1");
    } 
	else {
    while (n > 0) {
        count++;    // Ð?m thêm 1 ch? s?
        n /= 10; // C?t b? ch? s? cu?i cùng
    }
printf("Chu so: %d", count); // K?t qu?: 9
}
    return 0;
}
