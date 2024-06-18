#include <iostream>
#include <vector>
#include <algorithm>


void inverterParte(std::vector<int>& vec, int inicio, int fim) {
    while (inicio < fim) {
        std::swap(vec[inicio], vec[fim]);
        inicio++;
        fim--;
    }
}


std::vector<int> mesclarPartes(const std::vector<int>& parte1, const std::vector<int>& parte2) {
    std::vector<int> resultado;
    int i = 0, j = 0;

    while (i < parte1.size() && j < parte2.size()) {
        if (parte1[i] < parte2[j]) {
            resultado.push_back(parte1[i]);
            i++;
        } else {
            resultado.push_back(parte2[j]);
            j++;
        }
    }

   
    while (i < parte1.size()) {
        resultado.push_back(parte1[i]);
        i++;
    }

    while (j < parte2.size()) {
        resultado.push_back(parte2[j]);
        j++;
    }

    return resultado;
}

int main() {
    std::vector<int> A = {1, 2, 3, 4, 5, 6, 10, 9, 8, 7, 0};  

    
    std::vector<int> parte1(A.begin(), A.begin() + 6);

    
    std::vector<int> parte2(A.begin() + 6, A.end());
    inverterParte(parte2, 0, parte2.size() - 1);

    
    std::vector<int> resultado = mesclarPartes(parte1, parte2);

   
    std::cout << "Vetor ordenado:" << std::endl;
    for (int val : resultado) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
