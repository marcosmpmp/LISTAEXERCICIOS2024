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
        if (i % 2 == 0) {
            C[i] = A[i];
        } else {
            C[i] = B[i];
        }
    }

    cout << "Vetor C (posicoes pares de A e posicoes impares de B): " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << C[i] << " ";
        if ((i + 1) % 2 == 0) {
            cout << endl;
        }
    }

    return 0;
}
