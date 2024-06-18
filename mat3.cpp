#include <iostream>

int main() {
    const int tamanho = 5;
    int matriz[tamanho][tamanho];

    
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            matriz[i][j] = i * j;
        }
    }

    
    std::cout << "Matriz " << tamanho << "x" << tamanho << ":" << std::endl;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
