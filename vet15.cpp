#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    const int SIZE = 20;
    vector<int> vetor(SIZE);
    unordered_set<int> uniqueElements;

    cout << "Digite 20 numeros: " << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> vetor[i];
        uniqueElements.insert(vetor[i]);
    }

    cout << "Elementos únicos:\n";
    for (const int& elem : uniqueElements) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
