#include <iostream>

int main() {
    const int tamanho = 4;
    int matriz[tamanho][tamanho];
    int maiorValor = INT_MIN;
    int linhaMaiorValor = -1;
    int colunaMaiorValor = -1;

    
    std::cout << "Digite os elementos da matriz 4x4:" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            std::cin >> matriz[i][j];
            
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                linhaMaiorValor = i;
                colunaMaiorValor = j;
            }
        }
    }

    
    std::cout << "Matriz 4x4:" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }


    std::cout << "Maior valor: " << maiorValor << " encontrado na linha " << linhaMaiorValor << " e colun
