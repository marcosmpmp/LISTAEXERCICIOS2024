#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int SIZE = 10;
    vector<int> A(SIZE);
    vector<int> B(SIZE);
    vector<int> C(SIZE);

    cout << "Digite 10 numeros inteiros para o vetor A: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> A[i];
    }

    cout << "Digite 10 numeros inteiros para o vetor B: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> B[i];
    }

    for (int i = 0; i < SIZE; ++i) {
        C[i] = A[i] - B[i];
    }

    cout << "Vetor C (A - B): " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}