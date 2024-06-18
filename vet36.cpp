#include <iostream>
#include <vector>
#include <algorithm>  

int main() {
    std::vector<double> vetor(10);  

    
    std::cout << "Digite 10 números reais:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cin >> vetor[i];
    }

    
    std::sort(vetor.begin(), vetor.end());

   
    std::cout << "Vetor ordenado:" << std::endl;
    for (const double& num : vetor) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
