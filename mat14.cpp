#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

void gerarCartela(int cartela[5][5]) {
    bool numerosUtilizados[100] = {false};
    int numero;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            do {
                numero = rand() % 100;
            } while (numerosUtilizados[numero]);

            cartela[i][j] = numero;
            numerosUtilizados[numero] = true;
        }
    }
}
void imprimirCartela(int cartela[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << cartela[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int cartela[5][5];
    srand(time(nullptr));
    gerarCartela(cartela);
    cout << "Cartela de Bingo:\n";
    imprimirCartela(cartela);

    return 0;
}
