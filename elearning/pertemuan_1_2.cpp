#include <iostream>

using namespace std;

int main() {
    int A[3][5]; // Deklarasi array 3x5
    int N = 1;

    // Mengisi array dan langsung mencetak nilai
    for (int I = 0; I <= 2; I++) {
        for (int J = 0; J <= I; J++) {
            A[I][J] = N;
            cout << A[I][J] << " "; // Langsung mencetak nilai
            N++;
        }
        cout << endl; // Pindah baris setelah selesai satu baris
    }

    return 0;
}