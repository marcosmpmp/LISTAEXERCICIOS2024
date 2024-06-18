#include <iostream>
using namespace std;

int main() {
    const int tamanho = 10;
    int vetor[tamanho];

    cout << "Digite os valores do vetor de 10 posições:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "posição " << i + 1 << ": ";
        cin >> vetor[i];
    }

    int maior = vetor[0];
    int menor = vetor[0];

    for (int i = 1; i < tamanho; ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    cout << "O maior elemento do vetor é: " << maior << endl;
    cout << "O menor elemento do vetor é: " << menor << endl;

    return 0;
}