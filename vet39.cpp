#include <iostream>
#include <vector>


std::vector<int> calcularCoefsBinomiais(int n) {
    std::vector<int> linha(1, 1);  
    for (int k = 1; k <= n; ++k) {
        
        int coef = linha[k-1] * (n - k + 1) / k;
        linha.push_back(coef);
    }
    return linha;
}


void trianguloDePascal(int n) {
    for (int i = 0; i < n; ++i) {
        std::vector<int> linha = calcularCoefsBinomiais(i);
        for (int j = 0; j <= i; ++j) {
            std::cout << linha[j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> n;

    
    if (n > 0) {
        trianguloDePascal(n);
    } else {
        std::cout << "Por favor, digite um número inteiro positivo." << std::endl;
    }

    return 0;
}
