#include <iostream>
#include <vector>
#include <algorithm>  


std::vector<int> numeroParaVetor(int numero) {
    std::vector<int> vetor;
    do {
        vetor.push_back(numero % 10);
        numero /= 10;
    } while (numero > 0);
    return vetor;
}


std::vector<int> somarVetores(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> soma;
    int carry = 0, i = 0;
    while (i < a.size() || i < b.size() || carry != 0) {
        int digitoA = (i < a.size()) ? a[i] : 0;
        int digitoB = (i < b.size()) ? b[i] : 0;
        int somaDigito = digitoA + digitoB + carry;
        soma.push_back(somaDigito % 10);
        carry = somaDigito / 10;
        i++;
    }
    return soma;
}


void imprimirVetor(const std::vector<int>& vetor) {
    for (auto it = vetor.rbegin(); it != vetor.rend(); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;
}

int main() {
    int a, b;
    std::cout << "Digite o primeiro número (a): ";
    std::cin >> a;
    std::cout << "Digite o segundo número (b): ";
    std::cin >> b;

    if (a >= 10000 || b >= 10000 || a < 0 || b < 0) {
        std::cerr << "Os números devem ser positivos e menores que 10000." << std::endl;
        return 1;
    }

    std::vector<int> vetorA = numeroParaVetor(a);
    std::vector<int> vetorB = numeroParaVetor(b);

    std::vector<int> resultado = somarVetores(vetorA, vetorB);

    std::cout << "A soma dos números é: ";
    imprimirVetor(resultado);

    return 0;
}
