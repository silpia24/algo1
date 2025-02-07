#include <iostream>
using namespace std;

// NURUL SILPIA
// rs = rekrusif array
// ra = array
// sa = start nilai index array
// an = end nilai index array

// Fungsi rekursif untuk membalik array
void rs(int ra[], int sa, int an) {
    if (sa >= an) return;  // Base case: jika sudah sampai di tengah array

    swap(ra[sa], ra[an]);  // Tukar elemen awal dan akhir
    rs(ra, sa + 1, an - 1);  // Panggil rekursif untuk bagian dalam array
}

int main() {
    int ra[5] = {1, 2, 3, 4, 5};

    // Menampilkan array sebelum dibalik
    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < 5; i++){
        cout << ra[i] << " ";
    }
    cout << endl;

    // Panggil fungsi rekursif
    rs(ra, 0, 5 - 1);

    // Menampilkan array setelah dibalik
    cout << "Array setelah dibalik: ";
    for (int i = 0; i < 5; i++){
        cout << ra[i] << " ";
    }
    cout << endl;

    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Menampilkan array sebelum dibalik
//     cout << "Array sebelum dibalik: ";
//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Membalik array secara langsung
//     for (int i = 0, j = n - 1; i < j; i++, j--) {
//         swap(arr[i], arr[j]);
//     }

//     // Menampilkan array setelah dibalik
//     cout << "Array setelah dibalik: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
