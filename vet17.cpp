#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int SIZE = 10;
    vector<int> vetor(SIZE);

    cout << "Digite 10 numeros: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> vetor[i];
    }

    for (int i = 0; i < SIZE; ++i) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    cout << "Vetor modificado: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
