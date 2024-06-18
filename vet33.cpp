#include <iostream>
#include <vector>

using namespace std;

void lerVetor(vector<int> &v, int tamanho) {
    cout << "Digite " << tamanho << " elementos do vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cin >> v[i];
    }
}

void compactarVetor(vector<int> &v) {
    int index = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] != 0) {
            v[index++] = v[i];
        }
    }
    v.resize(index);
}
void exibirVetor(const vector<int> &v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main() {
    const int tamanho = 15;
    vector<int> v(tamanho);

    lerVetor(v, tamanho);

    cout << "Vetor original: ";
    exibirVetor(v);

    compactarVetor(v);

    cout << "Vetor compactado: ";
    exibirVetor(v);

    return 0;
}
