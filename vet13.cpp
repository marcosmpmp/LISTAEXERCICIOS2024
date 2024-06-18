#include <iostream>
#include <limits> 
using namespace std;

int main() {
    const int quantidadevalores = 5;
    int valor, maior, menor;
    int posicaomaior, posicaomenor;

    maior = numeric_limits<int>::min();
    menor = numeric_limits<int>::max();

    cout << "Digite 5 valores inteiros:\n";
    for (int i = 0; i < quantidadevalores; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> valor;

        if (valor > maior) {
            maior = valor;
            posicaomaior = i + 1; 
        }
        if (valor < menor) {
            menor = valor;
            posicaomenor = i + 1;
        }
    }

    cout << "\nPosicao do maior valor: " << posicaomaior << endl;
    cout << "Posicao do menor valor: " << posicaomenor << endl;

    return 0;
}

