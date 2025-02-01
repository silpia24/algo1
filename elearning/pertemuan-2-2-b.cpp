#include <stdio.h>

int main() {
    // Deklarasi array karakter 5x3
    char A[5][3] = {
        {'A', 'B', 'C'},
        {'D', 'E', 'F'},
        {'G', 'H', 'I'},
        {'J', 'K', 'L'},
        {'M', 'N', 'O'}
    };

    // Variabel untuk iterasi
    int I, J;

    // Loop untuk mencetak elemen array
    for (I = 0; I < 5; I++) {
        for (J = 0; J < 3; J++) {
            printf("%2c", A[I][J]); // Format output dengan spasi agar rapi
        }
        printf("\n"); // Pindah ke baris baru setelah mencetak satu baris
    }

    return 0;
}