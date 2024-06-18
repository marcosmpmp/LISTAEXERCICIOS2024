#include <iostream>
using namespace std;

const int NUM_ALUNOS = 10;
const int NUM_PROVAS = 3;
int encontrarPiorNota(int notas[][NUM_PROVAS], int prova) {
    int indicePiorNota = 0;
    int piorNota = notas[0][prova];

    for (int i = 1; i < NUM_ALUNOS; ++i) {
        if (notas[i][prova] < piorNota) {
            indicePiorNota = i;
            piorNota = notas[i][prova];
        }
    }

    return indicePiorNota;
}

int main() {
    int notas[NUM_ALUNOS][NUM_PROVAS];
    cout << "Digite as notas dos alunos em cada uma das 3 provas:\n";
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "Aluno " << i + 1 << ":\n";
        for (int j = 0; j < NUM_PROVAS; ++j) {
            cout << "Prova " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }
    int piorNotaProva1 = encontrarPiorNota(notas, 0);
    int piorNotaProva2 = encontrarPiorNota(notas, 1);
    int piorNotaProva3 = encontrarPiorNota(notas, 2);
    int alunosPiorNotaProva1 = 0;
    int alunosPiorNotaProva2 = 0;
    int alunosPiorNotaProva3 = 0;

    for (int i = 0; i < NUM_ALUNOS; ++i) {
        if (i == piorNotaProva1) {
            alunosPiorNotaProva1++;
        }
        if (i == piorNotaProva2) {
            alunosPiorNotaProva2++;
        }
        if (i == piorNotaProva3) {
            alunosPiorNotaProva3++;
        }
    }
    cout << "\nNúmero de alunos cuja pior nota foi na prova 1: " << alunosPiorNotaProva1 << endl;
    cout << "Número de alunos cuja pior nota foi na prova 2: " << alunosPiorNotaProva2 << endl;
    cout << "Número de alunos cuja pior nota foi na prova 3: " << alunosPiorNotaProva3 << endl;

    return 0;
}
