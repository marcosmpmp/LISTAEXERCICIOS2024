#include <iostream>
#include <iomanip> 
using namespace std;

const int NUM_ALUNOS = 3;
const int NUM_QUESTOES = 10;
const double NOTA_MINIMA = 7.0;
int calcularNota(char gabarito[], char respostasAluno[]) {
    int nota = 0;
    for (int i = 0; i < NUM_QUESTOES; ++i) {
        if (respostasAluno[i] == gabarito[i]) {
            nota++;
        }
    }
    return nota;
}
double calcularPercentualAprovacao(int notas[]) {
    int totalNotas = 0;
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        if (notas[i] >= NOTA_MINIMA) {
            totalNotas++;
        }
    }
    return (static_cast<double>(totalNotas) / NUM_ALUNOS) * 100;
}

int main() {
    char gabarito[NUM_QUESTOES];
    char respostasAlunos[NUM_ALUNOS][NUM_QUESTOES];
    int notas[NUM_ALUNOS];
    cout << "Digite o gabarito das 10 questões (a, b, c, d ou e):\n";
    for (int i = 0; i < NUM_QUESTOES; ++i) {
        cout << "Questão " << i + 1 << ": ";
        cin >> gabarito[i];
    }
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        int matricula;
        cout << "Digite a matrícula do aluno " << i + 1 << ": ";
        cin >> matricula;

        cout << "Digite as respostas do aluno " << i + 1 << ":\n";
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            cout << "Questão " << j + 1 << ": ";
            cin >> respostasAlunos[i][j];
        }
        notas[i] = calcularNota(gabarito, respostasAlunos[i]);
        cout << "\nAluno " << i + 1 << " - Matrícula: " << matricula << endl;
        cout << "Respostas: ";
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            cout << respostasAlunos[i][j] << " ";
        }
        cout << "\nNota: " << notas[i] << "\n\n";
    }
    double percentualAprovacao = calcularPercentualAprovacao(notas);
    cout << fixed << setprecision(2);
    cout << "Percentual de aprovação: " << percentualAprovacao << "%\n";

    return 0;
}
