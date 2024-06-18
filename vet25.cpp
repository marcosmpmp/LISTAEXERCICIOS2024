#include <iostream>
#include <vector>

int main() {
    std::vector<int> vetor;
    int numero = 1;

    while (vetor.size() < 100) {
        if (numero % 7 != 0 && numero % 10 != 7) {
            vetor.push_back(numero);
        }
        numero++;
    }

    for (int i = 0; i < vetor.size(); ++i) {
        std::cout << vetor[i] << " ";
    }

    return 0;
}
