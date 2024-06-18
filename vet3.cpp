#include <iostream>
#include <string>
using namespace std;

int main() {
    const int tamanho = 10;
    float vetororiginal[tamanho];
    float vetorquadrado[tamanho];

    cout << "Digite 10 números reais:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> vetororiginal[i];
    }    
    for (int i = 0; i < tamanho; ++i) {
        vetorquadrado[i] = vetororiginal[i] * vetororiginal[i];
    }

    cout << "\nconjunto original:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetorOriginal[i] << " ";
    }

    cout << "\nconjunto dos quadrados:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << vetorquadrado[i] << " ";
    }

    return 0;
}