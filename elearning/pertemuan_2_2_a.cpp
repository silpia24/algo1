#include <stdio.h>

int main() {
    char A[5][3] = {
        {'A', 'F', 'K'},
        {'B', 'G', 'L'},
        {'C', 'H', 'M'},
        {'D', 'I', 'N'},
        {'E', 'J', 'O'}
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