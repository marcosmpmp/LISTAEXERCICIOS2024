#include <iostream>
#include <vector>
using namespace std;
int main() {
    const int SIZE = 5;
    vector<double> vetor(SIZE);
    int codigo;


    cout << "Digite 5 numeros reais: " << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> vetor[i];
    }


    cout << "Digite um codigo inteiro (0 para sair, 1 para ordem direta, 2 para ordem inversa): ";
    cin >> codigo;

    switch (codigo) {
        case 0:

            cout << "Programa finalizado." << endl;
            break;
        case 1:

            cout << "Vetor na ordem direta: ";
            for (int i = 0; i < SIZE; ++i) {
                cout << vetor[i] << " ";
            }
            cout << endl;
            break;
        case 2:

            cout << "Vetor na ordem inversa: ";
            for (int i = SIZE - 1; i >= 0; --i) {
                cout << vetor[i] << " ";
            }
            cout << endl;
            break;
        default:

            cout << "Codigo invalido." << endl;
            break;
    }

    return 0;
}

