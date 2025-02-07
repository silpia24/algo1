#include <iostream>
using namespace std;

// NURUL SILPIA
// nrl = nim
// nis = index
// silpia = pola space untuk piramida miring poin d
int main() {
    int nrl[10] = {2, 4, 1, 2, 5, 1, 0, 0, 3, 0};  
    int nis = 0;

    // Pola (a) - Bentuk Segitiga Bertingkat dari NIM
    cout << "Pola (a):" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) {
            if (nis < 10)
                cout << nrl[nis++] << " ";
        }
        cout << endl;
    }
    
    // Reset index
    nis = 0;
    
    // Pola (b) - Bentuk Segitiga Terbalik Kanan
    cout << "\nPola (b):" << endl;
    for (int i = 4; i >= 1; i--) {
        for (int k = 1; k <= (4 - i); k++) {
            cout << "";
        }
        for (int j = 0; j < i; j++) {
            if (nis < 10)
                cout << nrl[nis++] << " ";
        }
        cout << endl;
    }

    // Reset index
    nis = 0;
    
    // Pola (c) - Segitiga Sama Kaki
    cout << "\nPola (c):" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int k = 1; k <= (5 - i); k++) {
            cout << "  ";
        }
        for (int j = 0; j < i; j++) {
            if (nis < 10)
                cout << nrl[nis++] << " ";
        }
        cout << endl;
    }

    // Reset index
    nis = 0;

    // Pola (d) - Piramida Miring
    cout << "\nPola (d):" << endl;
    for (int i = 4; i >= 1; i--) {
        for (int k = 1; k <= (5 - i); k++) {
            cout << "  ";
        }
        for (int j = 0; j < i; j++) {
            if (nis < 10)
                cout << nrl[nis++] << " ";
        }
        cout << endl;
    }

    return 0;
}
