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
    cout << "Penjumlahan array 2 dimensi\n";
    for (int i = 0; i <= 1; i++)
    {
        for (int l = 0; l <= 4; l++)
        {
            cout << imel[i][l] + silpi[i][l] << " ";
        }
        cout << endl;
    }

    // perkalian
    cout << "\nPerkalian arrray 2 dimensi\n";
    for (int i = 0; i <= 1; i++)
    {
        for (int l = 0; l <= 4; l++)
        {
            cout << imel[i][l] * silpi[i][l] << " ";
        }
        cout << endl;
    }
}