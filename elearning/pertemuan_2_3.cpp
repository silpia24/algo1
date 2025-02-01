#include <stdio.h>

int main() {
    // Deklarasi array karakter 3x5
    char B[3][5] = {
        {'A', 'D', 'G', 'J', 'M'},
        {'B', 'E', 'H', 'K', 'N'},
        {'C', 'F', 'I', 'L', 'O'}
    };

    // Variabel untuk iterasi
    int I, J;

    // Loop untuk mencetak elemen array
    for (I = 0; I < 3; I++) {
        for (J = 0; J < 5; J++) {
            printf("%4c", B[I][J]); // Format output dengan lebar 4 karakter agar rapi
        }
        printf("\n"); // Pindah ke baris baru setelah mencetak satu baris
    }

    return 0;
}