#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int SIZE = 10;
    vector<int> vetor1(SIZE);
    vector<int> vetorImpares;

    cout << "Digite 10 numeros inteiros no intervalo [0,50]: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        int num;
        cin >> num;
        while (num < 0 || num > 50) {
            cout << "Numero fora do intervalo. Digite novamente: ";
            cin >> num;
        }
        vetor1[i] = num;
        if (num % 2 != 0) {
            vetorImpares.push_back(num);
        }
    }

    cout << "Vetor 1: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << vetor1[i] << " ";
        if ((i + 1) % 2 == 0) {
            cout << endl;
        }
    }

    cout << "Vetor Impares: " << endl;
    for (int i = 0; i < vetorImpares.size(); ++i) {
        cout << vetorImpares[i] << " ";
        if ((i + 1) % 2 == 0) {
            cout << endl;
        }
    }
    if (vetorImpares.size() % 2 != 0) {
        cout << endl;
    }

    return 0;
}
