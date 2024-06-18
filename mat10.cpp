#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int soma_diagonal_principal = 0;
    cout << "Digite os elementos da matriz 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        soma_diagonal_principal += matriz[i][i];
    }
    cout << "A soma dos elementos na diagonal principal é: " << soma_diagonal_principal << endl;

    return 0;
}
