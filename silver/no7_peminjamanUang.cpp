#include <iostream>
using namespace std;

// NURUL SILPIA
// nrl = denominations
// ns = jumlah keping
// np = jumlah pinjaman

int main() {
    int nrl[] = {23, 17, 11, 7, 3, 2}; // Macam uang logam
    int ns[6] = {0}; // Untuk menyimpan jumlah keping setiap logam
    int np;

    // Input jumlah pinjaman
    cout << "Masukkan jumlah uang yang ingin dipinjam (minimal 2 sen): ";
    cin >> np;

    if (np < 2) {
        cout << "Pinjaman minimal adalah 2 sen!\n";
        return 0;
    }

    // Menentukan jumlah keping minimal
    for (int i = 0; i < 6; i++) {
        while (np >= nrl[i]) {
            ns[i]++;
            np -= nrl[i];
        }
    }

    // Menampilkan hasil
    cout << "\nKeping uang logam yang digunakan:\n";
    for (int i = 0; i < 6; i++) {
        if (ns[i] > 0) {
            cout << "Keping " << nrl[i] << " sen: " << ns[i] << " keping\n";
        }
    }

    // Jika masih ada sisa yang tidak bisa dipenuhi
    if (np > 0) {
        cout << "\nSisa uang yang tidak dapat dipenuhi: " << np << " sen\n";
    }

    return 0;
}