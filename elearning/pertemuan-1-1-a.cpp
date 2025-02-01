#include <iostream>
using namespace std;

int main()
{
    int A[3][5];
    for (int J = 0; J <= 4; J++)
    {
        for (int I = 0; I <= 2; I++)
        {
            A[I][J] = I;
        }
    }
    cout << "Print Array A: " << endl;
    for (int I = 0; I <= 2; I++)
    {
        for (int J = 0; J <= 4; J++)
        {
            cout << A[I][J] << " ";
        }
        cout << endl;
    }
    return 0;
}
