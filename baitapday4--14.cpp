#include <stdio.h>
// B?n có th? b? <math.h> vì bài này không dùng t?i hàm toán h?c nào

int main() {
    long long a;
    long long b = 0; // Luu t?ng các ch? s? ch?n
    long long c = 0; // Luu t?ng các ch? s? l?
    
    scanf("%lld", &a);
    
    // Tru?ng h?p d?c bi?t: N?u ngu?i dùng nh?p 0 (0 là s? ch?n)
    if (a == 0) {
        b = 0;
    } else {
        // Ðã thêm ngo?c nh?n { cho vòng l?p while
        while (a > 0) {
            long long tinh = a % 10;
            
            if (tinh % 2 == 0) {
                b += tinh; // C?ng tr?c ti?p ch? s? vào t?ng ch?n
            } else {
                c += tinh; // C?ng tr?c ti?p ch? s? vào t?ng l?
            }
            
            a /= 10;
        }
    }
    
    // In k?t qu? trên 2 dòng b?ng \n
    printf("%lld\n%lld", b, c);
    
    return 0;
}
