#include <iostream>
using namespace std;

const int NUM_ALUNOS = 5;
const int NUM_QUESTOES = 10;
void calcularPontuacao(char respostasAlunos[NUM_ALUNOS][NUM_QUESTOES], char gabarito[NUM_QUESTOES], int resultado[NUM_ALUNOS]) {
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        int pontuacao = 0;
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            if (respostasAlunos[i][j] == gabarito[j]) {
                pontuacao++;
            }
        }
        resultado[i] = pontuacao;
    }
}
void imprimirResultados(int resultado[NUM_ALUNOS]) {
    cout << "Pontuações dos alunos:\n";
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "Aluno " << i + 1 << ": " << resultado[i] << " pontos\n";
    }
}

int main() {
    char respostasAlunos[NUM_ALUNOS][NUM_QUESTOES];
    char gabarito[NUM_QUESTOES];
    int resultado[NUM_ALUNOS];
    cout << "Digite o gabarito das 10 questões (a, b ou c):\n";
    for (int i = 0; i < NUM_QUESTOES; ++i) {
        cout << "Questão " << i + 1 << ": ";
        cin >> gabarito[i];
    }
    cout << "Digite as respostas dos " << NUM_ALUNOS << " alunos:\n";
    for (int i = 0; i < NUM_ALUNOS; ++i) {
        cout << "Respostas do aluno " << i + 1 << ":\n";
        for (int j = 0; j < NUM_QUESTOES; ++j) {
            cout << "Questão " << j + 1 << ": ";
            cin >> respostasAlunos[i][j];
        }
    }
    calcularPontuacao(respostasAlunos, gabarito, resultado);
    imprimirResultados(resultado);

    return 0;
}
