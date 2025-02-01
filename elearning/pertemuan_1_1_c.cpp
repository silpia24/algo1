#include <iostream>

using namespace std;

int main() {
    int A[3][5];
    int N = 1;

    for (int I = 0; I <= 2; I++) {
        for (int J = 0; J <= 4 - I; J++) {
            A[I][J] = N;
            N++;
        }
    }

    cout << "Isi array: " << endl;
    for (int I = 0; I <= 2; I++) {
        for (int J = 0; J <= 4; J++) {
            if (J <= 4 - I)
                cout << A[I][J] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}