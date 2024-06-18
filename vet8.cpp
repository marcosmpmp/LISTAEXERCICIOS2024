#include <iostream>
#include <vector>
using namespace std;

int main();
vector<int> lervalores() {
    vector<int> valores;
    int valor;
    for (int i = 0; i < 6; ++i) {
        cout << "Digite o " << i + 1 << "º valor inteiro: ";
        cin >> valor;
        valores.push_back(valor);
    }
    return valores;
}

void mostrarinverso(const vector<int>& valores) {
    cout << "valores na ordem inversa:" << endl;
    for (auto it = valores.rbegin(); it != valores.rend(); ++it) {
        cout << *it << endl;
    }
}

int main() {
    vector<int> valores = lervalores();
    mostrarinverso(valores);
    return 0;
}