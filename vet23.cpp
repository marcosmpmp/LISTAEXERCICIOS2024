#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int SIZE = 5;
    vector<double> A(SIZE);
    vector<double> B(SIZE);

    cout << "Digite 5 numeros reais para o vetor A: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> A[i];
    }

    cout << "Digite 5 numeros reais para o vetor B: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> B[i];
    }

    double produtoEscalar = 0;
    for (int i = 0; i < SIZE; ++i) {
        produtoEscalar += A[i] * B[i];
    }

    cout << "Vetor A: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Vetor B: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    cout << "Produto Escalar: " << produtoEscalar << endl;

    return 0;
}
