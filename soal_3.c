#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Fungsi untuk mengecek apakah bilangan prima
int is_prime(long long n) {
    if (n <= 1) {
        return 0; // Bukan prima
    }
    if (n == 2) {
        return 1; // 2 adalah bilangan prima
    }
    if (n % 2 == 0) {
        return 0; // Bilangan genap lebih dari 2 bukan prima
    }
    
    // Cek dari 3 sampai akar kuadrat dari n
    for (long long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return 0; // Jika habis dibagi, bukan prima
        }
    }
    
    return 1; // Prima
}

int main() {
    long long N;
    
    // Membaca input N
    scanf("%lld", &N);
    
    // Mengecek apakah N prima atau bukan
    if (is_prime(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}