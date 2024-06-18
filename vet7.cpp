#include <iostream>
using namespace std;

int main() {
    const int tamanho = 10;
    int vetor[tamanho];

    cout << "Digite 10 números inteiros:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> vetor[i];
    }

    int maior = vetor[0];
    int posicao = 0;

    for (int i = 1; i < tamanho; ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    cout << "\nvetor inserido:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }

    cout << "\n\nO maior elemento do vetor é: " << maior << endl;
    cout << "Ele se encontra na posição: " << posicao << endl;

    return 0;
}