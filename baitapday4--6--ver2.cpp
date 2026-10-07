#include <stdio.h>

int main() {
    int n;
    long long sum = 0;

    // Nh?p giá tr? n
    scanf("%d", &n);

    // Vòng l?p ngoài: duy?t t?ng s? i t? 1 d?n n
    for (int i = 1; i <= n; i++) {
        
        // Vòng l?p trong: tính dau = (-1)^(i+1)
        int dau = -1; 
        for (int j = 1; j <= i; j++) {
            dau = dau * (-1); // Nhân (-1) d? i l?n d? d?i d?u liên t?c
        }

        // dau s? là +1 n?u i l?, -1 n?u i ch?n
        sum += dau * i;
    }

    // In k?t qu?
    printf("%lld", sum);

    return 0;
}
