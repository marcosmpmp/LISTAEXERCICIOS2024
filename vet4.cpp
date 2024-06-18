#include <iostream>
using namespace std;

int main() {
    const int tamanho = 8;
    int vetor[tamanho];

    cout << "Digite os valores do vetor de 8 posições:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Posição " << i << ": ";
        cin >> vetor[i];
    }

    int X, Y;
    cout << "Digite os valores de X e Y (posições no vetor):" << endl;
    cout << "X: ";
    cin >> X;
    cout << "Y: ";
    cin >> Y;

    if (X >= 0 && X < tamanho && Y >= 0 && Y < tamanho) {

        int soma = vetor[X] + vetor[Y];
        cout << "A soma dos valores nas posições " << X << " e " << Y << " é: " << soma << endl;
    } else {
        cout << "As posições X e Y estão fora do intervalo válido." << endl;
    }

    return 0;
}