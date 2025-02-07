#include <iostream>
#include <cmath>
using namespace std;

// NURUL SILPIA
// nurul = kebun kecil
// silpia = jumlah pohon semula

int main() {
    int nurul, silpia;

    // Meminta input ukuran kebun kecil (m x m)
    cout << "Masukkan ukuran kebun kecil (m): ";
    cin >> nurul;

    // Menghitung jumlah total pohon semula di kebun besar (n^2)
    silpia = (13 * nurul * nurul) + 1;

    // Menampilkan hasil
    cout << "\nJumlah total pohon semula di kebun besar: " << silpia << endl;

    return 0;
}