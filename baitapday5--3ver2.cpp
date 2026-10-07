#include <stdio.h>
#include <math.h>

// 1. Hàm ki?m tra s? nguyên t?
int is_prime(long long n) {
    if (n < 2) return 0;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// 2. Hàm ki?m tra ch? s? tang d?n (t? trái qua ph?i)
int kt_tangdan(long long n) {
    while (n >= 10) {
        long long last = n % 10;        // Ch? s? bên ph?i
        long long prev = (n / 10) % 10; // Ch? s? li?n tru?c bên trái
        
        // T? trái qua ph?i TANG -> Duy?t ngu?c t? ph?i qua trái ph?i GI?M
        // T?c là last ph?i L?N HON prev. N?u last <= prev là SAI
        if (last <= prev) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

// 3. Hàm ki?m tra ch? s? gi?m d?n (t? trái qua ph?i)
int kt_giamdan(long long n) {
    while (n >= 10) {
        long long last = n % 10;
        long long prev = (n / 10) % 10;
        
        // T? trái qua ph?i GI?M -> Duy?t ngu?c t? ph?i qua trái ph?i TANG
        // T?c là last ph?i NH? HON prev. N?u last >= prev là SAI
        if (last >= prev) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    // Tính kho?ng giá tr? [start, end]
    long long start = pow(10, N - 1);
    long long end = pow(10, N) - 1;

    int count = 0;
    for (long long i = start; i <= end; i++) {
        // Ðúng th? t? uu tiên: (Tang HO?C Gi?m) VÀ Nguyên t?
        if ((kt_tangdan(i) || kt_giamdan(i)) && is_prime(i)) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
