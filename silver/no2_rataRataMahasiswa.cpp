#include <iostream>
using namespace std;

// NURUL SILPIA
// ns = nama
// np = nilai
// nr = rata-rata
// rls = jumlah mahasiswa
// slp = jumlah mata pelajaran
// pia = rata rata mahasiswa
// lp = total fisika
// la = total matematika
// li = total kimia
// lu = total biologi


int main() {
    string ns[] = {"Andi", "Melisa", "Herman", "Joko", "Yayan"};
    double np[5][4] = {
        {8.4, 8.4, 9.4, 6.4},  // Andi
        {7.6, 6.6, 7.6, 8.6},  // Melisa
        {5.4, 8.4, 5.4, 8.4},  // Herman
        {4.6, 6.6, 8.6, 7.6},  // Joko
        {7.6, 6.6, 6.6, 7.6}   // Yayan
    };

    int rls = 5;
    int slp = 4;

    double lp = 0, la = 0, li = 0, lu = 0;

    // Menampilkan rata-rata nilai tiap mahasiswa
    cout << "Rata-rata nilai tiap mahasiswa:\n";
    for (int i = 0; i < rls; i++) {
        double pia = 0;
        for (int j = 0; j < slp; j++) {
            pia += np[i][j];  // Menjumlahkan nilai mahasiswa
        }
        pia /= slp;  // Hitung rata-rata
        cout << ns[i] << ": " << pia << endl;

        // Menambahkan nilai tiap mata pelajaran untuk perhitungan rata-rata per mata pelajaran
        lp += np[i][0];
        la += np[i][1];
        li += np[i][2];
        lu += np[i][3];
    }

    // Menghitung rata-rata tiap mata pelajaran
    cout << "\nRata-rata nilai tiap mata pelajaran:\n";
    cout << "Fisika: " << lp / rls << endl;
    cout << "Matematika: " << la / rls << endl;
    cout << "Kimia: " << li / rls << endl;
    cout << "Biologi: " << lu / rls << endl;

    return 0;
}
