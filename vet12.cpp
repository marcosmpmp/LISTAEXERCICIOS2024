#include <iostream>
#include <limits> 
using namespace std;

int main() {
    const int quantidadeValores = 5;
    int valor, maior, menor;
    double soma = 0;

    maior = numeric_limits<int>::min();
    menor = numeric_limits<int>::max();

   
    cout << "Digite 5 valores inteiros:\n";
    for (int i = 0; i < quantidadeValores; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> valor;

        if (valor > maior)
            maior = valor;
        if (valor < menor)
            menor = valor;

       
        soma += valor;
    }
    double media = soma / quantidadeValores;

    cout << "\nMaior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;
    cout << "Media dos valores: " << media << endl;

    return 0;
}