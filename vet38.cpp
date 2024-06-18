#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> valores; 
    int valor; 

   
    std::cout << "Digite 10 valores numéricos:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cin >> valor;
        
        
        auto it = std::lower_bound(valores.begin(), valores.end(), valor);
        valores.insert(it, valor);
    }

    
    std::cout << "Valores em ordem crescente:" << std::endl;
    for (const int& v : valores) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    return 0;
}
