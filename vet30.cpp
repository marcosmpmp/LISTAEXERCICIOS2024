#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> iintersecao(const vector<int>& vetor1, const vector<int>& vetor2) {
    vector<int> intersecao;

    for (int i = 0; i < vetor1.size(); ++i) {
        if (find(vetor2.begin(), vetor2.end(), vetor1[i]) != vetor2.end()) {
            if (find(intersecao.begin(), intersecao.end(), vetor1[i]) == intersecao.end()) {
                intersecao.push_back(vetor1[i]);
            }
        }
    }

    return intersecao;
}

int main() {
    vector<int> vetor1(10);
    vector<int> vetor2(10);

    cout << "Digite os elementos do primeiro vetor:\n";
    for (int i = 0; i < 10; ++i) {
        cin >> vetor1[i];
    }

    cout << "Digite os elementos do segundo vetor:\n";
    for (int i = 0; i < 10; ++i) {
        cin >> vetor2[i];
    }

    vector<int> intersecao = iintersecao(vetor1, vetor2);

    cout << "A intersecao dos vetores e:\n";
    for (int i = 0; i < intersecao.size(); ++i) {
        cout << intersecao[i] << " ";
    }
    cout << endl;

    return 0;
}
