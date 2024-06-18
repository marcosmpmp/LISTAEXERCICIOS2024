#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(10);

    cout << "Digite 10 números inteiros:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> v[i];
    }

    vector<int> v1; 
    vector<int> v2; 

    for (int i = 0; i < 10; ++i) {
        if (v[i] % 2 != 0) {
            v1.push_back(v[i]);
        } else {
            v2.push_back(v[i]);
        }
    }

    cout << "Elementos de v1 (ímpares): ";
    for (int i = 0; i < v1.size(); ++i) {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "Elementos de v2 (pares): ";
    for (int i = 0; i < v2.size(); ++i) {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}
