#include <iostream>
#include <algorithm>
using namespace std;

// NURUL SILPIA
// n = jumlah elemen array
// nrl = array dari jumlah elemen
// rl = elemen array
// pia = pilihan array
// nur = nilai yang ingin dicari
// sil = hasil atau result
// nurul = pencarian dari kiri
// silpia = pencarian dari kanan
// silpiaNurul = pencarian dari tengah

int main() {
    int n, pia, nur;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int nrl[n];

    cout << "Masukkan elemen array: (enter untuk memisahkan elemen)\n";
    for (int i = 0; i < n; i++) {
        cin >> nrl[i];
    }

    cout << "\nPilih metode pencarian:\n";
    cout << "1. Pencarian Sekuensial\n";
    cout << "2. Pencarian Biner\n";
    cout << "Masukkan pilihan (1/2): ";
    cin >> pia;

    cout << "\nMasukkan nilai yang ingin dicari: ";
    cin >> nur;

    int sil = -1; // Inisialisasi indeks hasil pencarian

    if (pia == 1) {
        // **Pencarian Sekuensial**
        for (int i = 0; i < n; i++) {
            if (nrl[i] == nur) {
                sil = i; // Simpan indeks jika ditemukan
                break;
            }
        }
    } else if (pia == 2) {
        // **Pencarian Biner**
        sort(nrl, nrl + n); // Urutkan array sebelum binary search
        int nurul = 0, silpia = n - 1;
        while (nurul <= silpia) {
            int silpiaNurul = nurul + (silpia - nurul) / 2;
            if (nrl[silpiaNurul] == nur) {
                sil = silpiaNurul; // Simpan indeks jika ditemukan
                break;
            } else if (nrl[silpiaNurul] < nur) {
                nurul = silpiaNurul + 1; // Cari di kanan
            } else {
                silpia = silpiaNurul - 1; // Cari di kiri
            }
        }
    } else {
        cout << "Pilihan tidak valid!\n";
        return 0;
    }

    if (sil != -1) {
        cout << "\nNilai ditemukan di indeks ke-" << sil << endl;
    } else {
        cout << "Nilai tidak ditemukan dalam array.\n";
    }

    return 0;
}