#include <iostream>
#include <string>
using namespace std;

int main() {

    int valores[6];

    cout << "Digite 6 valores inteiros:" << endl;
    for (int i = 0; i < 6; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> valores[i];
    }
    cout << "Valores inseridos:" << endl;
    for (int i = 0; i < 6; ++i) {
        cout << valores[i] << endl;
    }

    return 0;
}