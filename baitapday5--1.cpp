#include <stdio.h>

// -------------------------------------------------------------
// Hàm 1: Ki?m tra m?t s? n có ph?i s? nguyên t? không
// -------------------------------------------------------------
int is_prime(long long n) {
    if (n < 2) {
        return 0; // S? nh? hon 2 không ph?i s? nguyên t?
    }
    // Dùng vòng l?p for ki?m tra u?c s?
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Chia h?t cho s? khác -> Không ph?i s? nguyên t?
        }
    }
    return 1; // Là s? nguyên t?
}

// -------------------------------------------------------------
// Hàm 2: Ki?m tra t?t c? ch? s? c?a n có ph?i là s? nguyên t? (2, 3, 5, 7)
// -------------------------------------------------------------
int all_digits_prime(long long n) {
    while (n > 0) {
        int digit = n % 10; // L?y ch? s? hàng don v?
        
        // N?u ch? s? không thu?c {2, 3, 5, 7} -> B? lo?i ngay
        if (digit != 2 && digit != 3 && digit != 5 && digit != 7) {
            return 0;
        }
        
        n /= 10; // B? ch? s? hàng don v?
    }
    return 1; // T?t c? các ch? s? d?u là s? nguyên t?
}

// -------------------------------------------------------------
// Hàm 3: Tính t?ng các ch? s? c?a n
// -------------------------------------------------------------
int sum_digits(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum; // Tr? v? t?ng các ch? s?
}

// -------------------------------------------------------------
// Hàm 4: Ki?m tra s? thu?n nguyên t? (K?t h?p 3 hàm trên)
// -------------------------------------------------------------
int is_pure_prime(long long n) {
    // Ði?u ki?n 1: B?n thân n là s? nguyên t?
    if (is_prime(n) == 0) {
        return 0;
    }

    // Ði?u ki?n 2: T?t c? các ch? s? là s? nguyên t?
    if (all_digits_prime(n) == 0) {
        return 0;
    }

    // Ði?u ki?n 3: T?ng ch? s? c?a nó cung là s? nguyên t?
    int total = sum_digits(n);
    if (is_prime(total) == 0) {
        return 0;
    }

    return 1; // Th?a mãn c? 3 di?u ki?n -> Là s? thu?n nguyên t?
}

// -------------------------------------------------------------
// Hàm main
// -------------------------------------------------------------
int main() {
    long long a, b;

    // Nh?p hai s? a và b trong do?n [a, b]
    if (scanf("%lld %lld", &a, &b) != 2) return 0;

    // Ð?m b?o a <= b
    if (a > b) {
        long long temp = a;
        a = b;
        b = temp;
    }

    int count = 0;

    // Duy?t qua các s? t? a d?n b
    for (long long i = a; i <= b; i++) {
        if (is_pure_prime(i) == 1) {
            count++;
        }
    }

    // In ra s? lu?ng s? thu?n nguyên t? tìm du?c
    printf("%d\n", count);

    return 0;
}
