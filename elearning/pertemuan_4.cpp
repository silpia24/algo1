#include <iostream>
using namespace std;

int main()
{

    int A[5] = {15, 2, 14, 35, 5};
    int N;
    bool found = false;
    int count = 0;

    cout << "Masukkan nilai yang ingin dicari (N): ";
    cin >> N;

    for (int i = 0; i < 5; i++)
    {
        if (A[i] == N)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "ADA" << endl;
    }
    else
    {
        cout << "TIDAK ADA" << endl;
    }
}