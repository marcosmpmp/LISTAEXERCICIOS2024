#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int SIZE = 50;
    vector<int> vetor(SIZE);

    for (int i = 0; i < SIZE; ++i) {
        vetor[i] = (i + 5 * i) % (i + 1);
    }

    cout << "Vetor: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
