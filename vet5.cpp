#include <iostream>
using namespace std;

int main() {
    const int tamanho = 10;
    int vetor[tamanho];
    int contadorpares = 0;

    cout << "Digite os valores do vetor de 10 posições:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Posição " << i + 1 << ": ";
        cin >> vetor[i];
    }

    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] % 2 == 0) {
            contadorpares++;
        }
    }

    cout << "O vetor possui " << contadorpares << " valores dos pares:" << endl;

    return 0;
}