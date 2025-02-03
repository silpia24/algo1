#include <iostream>

using namespace std;

int main() {
    // Deklarasi matriks pertama (2x3)
    int P[2][3] = {
        {2, 1, 2},
        {1, 2, 3}
    };

    // Deklarasi matriks kedua (3x3)
    int Q[3][3] = {
        {2, 1, 4},
        {1, 2, 3},
        {2, 1, 1}
    };

    // Hasil perkalian (2x3)
    int R[2][3];

    // Inisialisasi matriks hasil dengan nol
    for (int I = 0; I < 2; I++) {
        for (int J = 0; J < 3; J++) {
            R[I][J] = 0;
        }
    }

    // Perkalian matriks P (2x3) dengan Q (3x3)
    for (int I = 0; I < 2; I++) {
        for (int J = 0; J < 3; J++) {
            for (int K = 0; K < 3; K++) {
                R[I][J] += P[I][K] * Q[K][J];
            }
        }
    }

    // Menampilkan hasil perkalian matriks
    cout << "Hasil perkalian matriks (2x3):" << endl;
    for (int I = 0; I < 2; I++) {
        for (int J = 0; J < 3; J++) {
            cout << R[I][J] << "\t";
        }
        cout << endl;
    }

    return 0;
}