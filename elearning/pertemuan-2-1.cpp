#include <iostream>

using namespace std;

int main() {
    const int rows = 3, cols = 5;
    
    // Deklarasi dan inisialisasi matriks
    int matrix[rows][cols] = {
        {19, 11, 8, 25, 79},
        {16, 7, 9, 13, 25},
        {30, 10, 12, 40, 22}
    };

    int total = 0;

    cout << "Hasil jumlah per kolom:\n";

    // Iterasi berdasarkan kolom (column-major order)
    for (int j = 0; j < cols; j++) {
        int colSum = 0;  // Variabel untuk menyimpan jumlah per kolom
        cout << "Kolom " << j << ": ";
        
        // Iterasi berdasarkan baris
        for (int i = 0; i < rows; i++) {
            cout << matrix[i][j]; // Cetak elemen di kolom ini
            
            colSum += matrix[i][j];  // Menjumlahkan elemen dalam kolom
            
            // Cetak tanda + jika masih ada elemen berikutnya di kolom ini
            if (i < rows - 1) {
                cout << " + ";
            }
        }
        
        cout << " = " << colSum << endl; // Cetak hasil jumlah kolom
        total += colSum; // Menambahkan hasil ke total
    }

    cout << "\nTotal elemen dalam column-major order: " << total << endl;

    return 0;
}