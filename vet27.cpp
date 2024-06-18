#include <iostream>
#include <vector>
using namespace std;

bool eprimo(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    const int tamanho = 10;
    vector<int> numeros(tamanho);
    cout << "Digite 10 números inteiros:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cin >> numeros[i];
    }

    cout << "Números primos e suas posições no vetor:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        if (eprimo(numeros[i])) {
    cout << "Número primo: " << numeros[i] << ", Posição: " << i << endl;
        }
    }

    return 0;
}
