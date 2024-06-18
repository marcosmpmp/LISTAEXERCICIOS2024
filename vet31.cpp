#include <iostream>
#include <vector>
using namespace std;

vector<int> uuniao(const vector<int>& vetor1, const vector<int>& vetor2) {
    vector<int> uniao = vetor1;

    for (int i = 0; i < vetor2.size(); ++i) {
    bool encontrado = false;
    for (int j = 0; j < vetor1.size(); ++j) {
        if (vetor2[i] == vetor1[j]) {
            encontrado = true;
            break;
}
}
    if (!encontrado) {
        uniao.push_back(vetor2[i]);
        }
    }

    return uniao;
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

    vector<int> uniao = uuniao(vetor1, vetor2);

    cout << "A uniao dos dois vetores e:\n";
    for (int i = 0; i < uniao.size(); ++i) {
        cout << uniao[i] << " ";
    }
    cout << endl;

    return 0;
}
