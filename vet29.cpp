#include <iostream>
#include <vector>
using namespace std;

bool eh_par(int num) {
    return num % 2 == 0;
}

int main() {
    vector<int> numeros; 
    vector<int> pares; 
    vector<int> impares;

    for (int i = 0; i < 6; ++i) {
        int num;
        cout << "Digite um número inteiro: ";
        cin >> num;
        numeros.push_back(num);
        if (eh_par(num)) {
            pares.push_back(num);
        } else {
            impares.push_back(num);
        }
    }

    cout << "Números pares digitados: ";
    for (int num : pares) {
        cout << num << " ";
    }
    cout << endl;

    int soma_pares = 0;
    for (int num : pares) {
        soma_pares += num;
    }
    cout << "Soma dos números pares digitados: " << soma_pares << endl;

    cout << "Números ímpares digitados: ";
    for (int num : impares) {
        cout << num << " ";
    }
    cout << endl;

    int quantidade_impares = impares.size();
    cout << "Quantidade de números ímpares digitados: " << quantidade_impares << endl;

    return 0;
}
