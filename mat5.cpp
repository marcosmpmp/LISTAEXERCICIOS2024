#include <iostream>

int main() {
    const int tamanho = 5;
    int matriz[tamanho][tamanho];
    int valorX;
    bool encontrado = false;
    int linhaEncontrado = -1;
    int colunaEncontrado = -1;

    
    std::cout << "Digite os elementos da matriz 5x5:" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            std::cin >> matriz[i][j];
        }
    }

    
    std::cout << "Digite o valor X a ser buscado na matriz: ";
    std::cin >> valorX;

    
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            if (matriz[i][j] == valorX) {
                encontrado = true;
                linhaEncontrado = i;
                colunaEncontrado = j;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }

    
    if (encontrado) {
        std::cout << "Valor " << valorX << " encontrado na linha " << linhaEncontrado << " e coluna " << colunaEncontrado << std::endl;
    } else {
        std::cout << "Valor " << valorX << " não encontrado na matriz." << std::endl;
    }

    return 0;
}
