#include <iostream>
#include <vector>

using namespace std;

bool numerojaExistente(const vector<int> &v, int num) {
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == num) {
            return true;
        }
    }
    return false;
}

int main() {
    const int tamanho = 10;
    vector<int> numeros;
    int num;

    cout << "Digite 10 números diferentes:\n";
    while (numeros.size() < tamanho) {
        cout << "Digite um número: ";
        cin >> num;
        if (numerojaExistente(numeros, num)) {
            cout << "Número já digitado, por favor digite um número diferente.\n";
        } else {
            numeros.push_back(num);
        }
    }

    cout << "Vetor final: ";
    for (int i = 0; i < numeros.size(); ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
