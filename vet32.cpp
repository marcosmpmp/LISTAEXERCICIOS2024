#include <iostream>
#include <vector>

using namespace std;

void lerVetor(vector<int> &v, int tamanho) {
    cout << "Digite " << tamanho << " elementos do vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cin >> v[i];
    }
}
vector<int> somaVetores(const vector<int> &x, const vector<int> &y) {
    vector<int> resultado(x.size());
    for (size_t i = 0; i < x.size(); ++i) {
        resultado[i] = x[i] + y[i];
    }
    return resultado;
}
vector<int> produtoVetores(const vector<int> &x, const vector<int> &y) {
    vector<int> resultado(x.size());
    for (size_t i = 0; i < x.size(); ++i) {
        resultado[i] = x[i] * y[i];
    }
    return resultado;
}
vector<int> diferencaVetores(const vector<int> &x, const vector<int> &y) {
    vector<int> resultado;
    for (size_t i = 0; i < x.size(); ++i) {
        bool encontrado = false;
        for (size_t j = 0; j < y.size(); ++j) {
            if (x[i] == y[j]) {
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            resultado.push_back(x[i]);
        }
    }
    return resultado;
}
vector<int> intersecaoVetores(const vector<int> &x, const vector<int> &y) {
    vector<int> resultado;
    for (size_t i = 0; i < x.size(); ++i) {
        for (size_t j = 0; j < y.size(); ++j) {
            if (x[i] == y[j]) {
                resultado.push_back(x[i]);
                break;
            }
        }
    }
    return resultado;
}
vector<int> uniaoVetores(const vector<int> &x, const vector<int> &y) {
    vector<int> resultado = x;
    for (size_t j = 0; j < y.size(); ++j) {
        bool encontrado = false;
        for (size_t i = 0; i < x.size(); ++i) {
            if (y[j] == x[i]) {
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            resultado.push_back(y[j]);
        }
    }
    return resultado;
}
void exibirVetor(const vector<int> &v) {
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main() {
    const int tamanho = 5;
    vector<int> x(tamanho), y(tamanho);

    cout << "Preencha o vetor x:\n";
    lerVetor(x, tamanho);

    cout << "Preencha o vetor y:\n";
    lerVetor(y, tamanho);

    cout << "Soma entre x e y: ";
    exibirVetor(somaVetores(x, y));

    cout << "Produto entre x e y: ";
    exibirVetor(produtoVetores(x, y));

    cout << "Diferença entre x e y: ";
    exibirVetor(diferencaVetores(x, y));

    cout << "Interseção entre x e y: ";
    exibirVetor(intersecaoVetores(x, y));

    cout << "União entre x e y: ";
    exibirVetor(uniaoVetores(x, y));

    return 0;
}
