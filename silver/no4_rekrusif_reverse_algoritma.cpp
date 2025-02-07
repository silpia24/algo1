#include <iostream>
using namespace std;

// NURUL SILPIA
// rs = rekrusif array
// ra = array
// sa = start nilai index array
// an = end nilai index array


// Fungsi rekursif untuk membalik nilai "algoritma"
void rs(char ra[], int sa, int an) {
    if (sa >= an) return;  // Base case: jika sudah sampai di tengah array

    swap(ra[sa], ra[an]);  // Tukar elemen awal dan akhir
    rs(ra, sa + 1, an - 1);  // Panggil rekursif untuk bagian dalam array
}

int main() {
    char ra[9] = {'a', 'l', 'g', 'o', 'r', 'i', 't', 'm', 'a'};

    // Menampilkan array sebelum dibalik
    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < 9; i++){
        cout << ra[i] << " ";
    }
    cout << endl;

    // Panggil fungsi rekursif
    rs(ra, 0, 9 - 1);

    // Menampilkan array setelah dibalik
    cout << "Array setelah dibalik: ";
    for (int i = 0; i < 9; i++){
        cout << ra[i] << " ";
    }
    cout << endl;

    return 0;
}
