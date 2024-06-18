#include <iostream>

int main() {
    int matriz[5][5];

    
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (i == j) {
                matriz[i][j] = 1;  
            } else {
                matriz[i][j] = 0;  
            }
        }
    }

    
    std::cout << "Matriz 5x5:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
