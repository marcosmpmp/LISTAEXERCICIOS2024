#include <iostream>
using namespace std;

int main() {
    const int tamanho = 10;
    float vetor[tamanho];
    int quantidadenegativos = 0;
    float somapositivos = 0;


    cout << "Digite 10 numeros reais:\n";
    for (int i = 0; i < tamanho; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> vetor[i];
    }

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < 0)
            quantidadenegativos++;
        else
            somapositivos += vetor[i];
    }

    cout << "Quantidade de numeros negativos: " << quantidadenegativos << endl;
    cout << "Soma dos numeros positivos: " << somapositivos << endl;

    return 0;
}