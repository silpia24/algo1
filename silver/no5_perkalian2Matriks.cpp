#include <iostream>
using namespace std;

// NURUL SILPIA
// nurul = matriks A
// silpia = matriks B
// silpiaNurul = result perkalian

int main()
{
    int nurul[3][3] = {{6, 7, 8},
                       {1, 2, 3},
                       {4, 5, 6}};

    int silpia[3][3] = {{4, 2, 3},
                        {5, 3, 7},
                        {3, 4, 6}};

    int silpiaNurul[3][3] = {0}; // Inisialisasi matriks hasil dengan 0

    // Perkalian matriks
    cout << "\nHasil Perkalian Matriks:\n";
    for (int i = 0; i < 3; i++)
    { // Baris matriks C
        for (int j = 0; j < 3; j++)
        { // Kolom matriks D
            for (int k = 0; k < 3; k++)
            { // Iterasi penjumlahan
                silpiaNurul[i][j] += nurul[i][k] * silpia[k][j];
            }
            cout << silpiaNurul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}