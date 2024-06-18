#include <iostream>
using namespace std;

int m[5][4];

void inserirInformacoes()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Aluno numero " << i + 1 << endl;
        cout << "Insira o numero de matricula: ";
        cin >> m[i][0];
        cout << "Insira a media das provas: ";
        cin >> m[i][1];
        cout << "Insira a media dos trabalhos: ";
        cin >> m[i][2];
        cout << endl;
        m[i][3] = m[i][1] + m[i][2];
    }
}

void alunoMelhorNota()
{
    int maior, matricula;
    for (int i = 0; i < 5; i++)
    {
        if (m[i][3] > maior)
        {
            maior = m[i][3];
            matricula = m[i][0];
        }
    }
    cout << "O numero de matricula do aluno com a maior nota e: " << matricula << endl;
}

void mediaDasNotasFinais()
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma += m[i][3];
    }
    cout << "A media aritimetica entre as notas finais e " << soma / 5 << endl;
}

int main()
{
    inserirInformacoes();
    alunoMelhorNota();
    mediaDasNotasFinais();
}
