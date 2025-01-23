#include <iostream>
using namespace std;

int main()
{
    // 2412510113 Imelia Diva Ananda
    // 2412510030 Nurul Silpia
    // i = baris
    // l = kolom

    int imel[2][5] = {
                        {2, 4, 1, 2, 5},
                        {1, 0, 1, 1, 2}
                    };

    int silpi[2][5] = {
                        {2, 4, 1, 2, 5},
                        {1, 0, 0, 3, 0}
                    };

    // penjumlahan
    cout << "Penjumlahan array 2 dimensi imel dan silpi\n";
    for (int i = 0; i <= 1; i++)
    {
        for (int l = 0; l <= 4; l++)
        {
            cout << imel[i][l] + silpi[i][l] << " ";
        }
        cout << endl;
    }

    // Deklarasi matriks
    int diva[2][5] = {
        {2, 4, 1, 2, 5},
        {1, 0, 1, 1, 2}
    };

    int nurul[5][2] = {
        {2, 4},
        {1, 2},
        {5, 1},
        {0, 0},
        {3, 0}
    };

    int mesil[2][2] = {}; 

    // Perkalian matriks
    cout << "\nHasil perkalian matriks:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            mesil[i][j] = 0;
            for (int k = 0; k < 5; k++) {
                mesil[i][j] += diva[i][k] * nurul[k][j];
            }
            cout << mesil[i][j] << " ";
        }
        cout << endl;
    }
}
