#include <iostream>
#include <limits>

using namespace std;

int main() {
    const int NUM_ALUNOS = 10;
    int numeros[NUM_ALUNOS];
    double alturas[NUM_ALUNOS];

    int numMaisBaixo, numMaisAlto;
    double alturaMaisBaixo = numeric_limits<double>::max();
    double alturaMaisAlto = numeric_limits<double>::min();

    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "Digite o numero do aluno " << i + 1 << ": ";
        cin >> numeros[i];
        cout << "Digite a altura do aluno " << i + 1 << " em metros: ";
        cin >> alturas[i];

        if (alturas[i] < alturaMaisBaixo) {
            alturaMaisBaixo = alturas[i];
            numMaisBaixo = numeros[i];
        }

        if (alturas[i] > alturaMaisAlto) {
            alturaMaisAlto = alturas[i];
            numMaisAlto = numeros[i];
        }
    }

    cout << "Aluno mais baixo: Numero " << numMaisBaixo << " com altura " << alturaMaisBaixo << " metros." << endl;
    cout << "Aluno mais alto: Numero " << numMaisAlto << " com altura " << alturaMaisAlto << " metros." << endl;

    return 0;
}
