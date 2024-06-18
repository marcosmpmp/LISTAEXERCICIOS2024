#include <iostream>
#include <vector>
using namespace std;

vector<int> ler_valores_pares();
void mostrar_ordem_inversa(vector<int> valores);

vector<int> ler_valores_pares() {
    vector<int> valores_pares;
    int valor;
    while (valores_pares.size() < 6) {
        cout << "Digite um valor inteiro par: ";
        cin >> valor;
        if (valor % 2 == 0) {
            valores_pares.push_back(valor);
        } else {
            cout << "O valor digitado não é par. tente novamente." << endl;
        }
    }
    return valores_pares;
}

void mostrar_ordem_inversa(vector<int> valores) {
    cout << "Valores na ordem inversa:" << endl;
    for (int i = valores.size() - 1; i >= 0; i--) {
        cout << valores[i] << endl;
    }
}

int main() {
    cout << "Digite 6 valores inteiros pares:" << endl;
    vector<int> valores = ler_valores_pares();
    mostrar_ordem_inversa(valores);
    return 0;
}