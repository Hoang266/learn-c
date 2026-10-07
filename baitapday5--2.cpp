#include <stdio.h>

// Hàm ki?m tra n có ph?i là s? hoàn h?o không
int kt(long long n) {
    if (n <= 1) return 0; // S? <= 1 không ph?i là s? hoàn h?o
    
    long long sum = 0;
    // 1. Dùng vòng l?p tính t?ng các u?c nh? hon n
    for (long long i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    
    // 2. Sau khi tính xong t?ng, so sánh v?i n
    if (sum == n) {
        return 1; // Là s? hoàn h?o
    }
    return 0; // Không ph?i s? hoàn h?o
}

int main() {
    long long a, b;
    // Nh?p a và b (nh? thêm d?u &)
    scanf("%lld %lld", &a, &b);

    // Ð?i ch? n?u a > b
    if (a > b) {
        long long temp = a;
        a = b;
        b = temp;
    }

    int found = 0; // Bi?n d?m s? lu?ng s? hoàn h?o

    // Duy?t t?ng s? i t? a d?n b
    for (long long i = a; i <= b; i++) {
        if (kt(i) == 1) {
            printf("%lld ", i);
            found++;
        }
    }

    // N?u không tìm th?y s? nào thì in ra 0
    if (found == 0) {
        printf("0");
    }

    return 0;
}
