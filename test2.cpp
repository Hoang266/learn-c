#include <stdio.h>

int main() {
    // Dùng ki?u long long d? không b? tràn s? v?i 10^9
    long long n, m, a;

    // Nh?p dúng theo th? t? d? bài: n, m, a
    if (scanf("%lld %lld %lld", &n, &m, &a) == 4) {
        
        // Tính s? viên dá c?n theo chi?u dài và chi?u r?ng (có làm tròn lên)
        long long vien_chieu_dai = (n + a - 1) / a;
        long long vien_chieu_rong = (m + a - 1) / a;

        // T?ng s? viên dá là tích c?a 2 chi?u
        long long tong_so_vien = vien_chieu_dai * vien_chieu_rong;

        // In duy nh?t 1 s? ra màn hình
        printf("%lld\n", tong_so_vien);
    }

    return 0;
}
