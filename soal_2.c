#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char A[101], B[101]; // Deklarasi string A dan B dengan maksimal 100 karakter
    int panjangA, panjangB;
    
    // Membaca input string A dan B
    scanf("%s", A);
    scanf("%s", B);
    
    // Menghitung panjang string A dan B
    panjangA = strlen(A);
    panjangB = strlen(B);
    
    // Cek jika panjang kedua string berbeda
    if (panjangA != panjangB) {
        printf("BERBEDA\n");
    } else {
        // Jika panjang sama, cek apakah string identik
        if (strcmp(A, B) == 0) {
            printf("IDENTIK\n");
        } else {
            // Jika panjang sama tapi tidak identik, cek apakah 'mirip' (case-insensitive)
            if (strcasecmp(A, B) == 0) {
                printf("MIRIP\n");
            } else {
                printf("BERBEDA\n");
            }
        }
    }
    
    return 0;
}
