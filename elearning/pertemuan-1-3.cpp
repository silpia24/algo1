#include <stdio.h>

int main() {
    char A[5][3] = {
        {'A', 'F', 'K'},
        {'B', 'G', 'L'},
        {'C', 'H', 'M'},
        {'D', 'I', 'O'},
        {'E', 'J', 'P'}
    };

    int I, J;
    for (I = 0; I < 5; I++) {
        for (J = 0; J < 3; J++) {
            printf("%2c", A[I][J]);
        }
        printf("\n");
    }

    return 0;
}