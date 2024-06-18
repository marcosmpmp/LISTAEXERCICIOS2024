#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    const int SIZE = 10;
    vector<int> vetor(SIZE);
    unordered_set<int> seen;
    unordered_set<int> duplicates;

    cout << "Digite 10 numeros: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> vetor[i];
        if (seen.find(vetor[i]) != seen.end()) {
            duplicates.insert(vetor[i]);
        }
        seen.insert(vetor[i]);
    }

    if (!duplicates.empty()) {
        cout << "Valores duplicados: ";
        for (const int& val : duplicates) {
            cout << val << " ";
        }
        cout << endl;
    } else {
        cout << "Não há valores duplicados." << endl;
    }

    return 0;
}