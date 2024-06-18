#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int SIZE = 10;
    vector<int> vetor(SIZE);
    int x;

    cout << "Digite 10 numeros: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> vetor[i];
    }

    cout << "Digite um numero inteiro x: ";
    cin >> x;

    int count = 0;
    vector<int> multiplos;

    for (int i = 0; i < SIZE; ++i) {
        if (vetor[i] % x == 0) {
            multiplos.push_back(vetor[i]);
            count++;
        }
    }


    if (count > 0) {
        cout << "Multiplos de " << x << " no vetor: ";
        for (int i = 0; i < multiplos.size(); ++i) {
            cout << multiplos[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Nao ha multiplos de " << x << " no vetor." << endl;
    }

    return 0;
}
