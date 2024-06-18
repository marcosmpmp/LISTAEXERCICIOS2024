#include <iostream>

int main() {
    int matriz[4][4];
    int contador = 0;

    
    std::cout << "Digite os elementos da matriz 4x4:" << std::endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cin >> matriz[i][j];
        }
    }

   
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (matriz[i][j] > 10) {
                ++contador;
            }
        }
    }

    
    std::cout << "A matriz possui " << contador << " valores maiores que 10." << std::endl;

    return 0;
}
