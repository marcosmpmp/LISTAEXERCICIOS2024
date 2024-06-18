#include <iostream>
using namespace std;

float A[2][2], B[2][2], C[2][2];
char opcao;
float constante;

void mostrarMatriz(float mat[2][2], const string &name)
{
    cout << "Matriz " << name << ":" << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void receberMatrizes()
{
    cout << "Digite os elementos da matriz A (2x2):" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> A[i][j];
        }
        cout << endl;
    }

    cout << "Digite os elementos da matriz B (2x2):" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
        cout << endl;
    }
}

int main()
{
    receberMatrizes();
    
    cout << "Escolha uma opcao:" << endl;
    cout << "(a) Somar as duas matrizes" << endl;
    cout << "(b) Subtrair a primeira matriz da segunda" << endl;
    cout << "(c) Adicionar uma constante às duas matrizes" << endl;
    cout << "(d) Imprimir as matrizes" << endl;
    cin >> opcao;

    switch (opcao)
    {
    case 'a':
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
        mostrarMatriz(C, "C (resultado da soma de A e B)");
        break;

    case 'b':
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                C[i][j] = B[i][j] - A[i][j];
            }
        }
        mostrarMatriz(C, "C (resultado da subtracao de B e A)");
        break;

    case 'c':
        cout << "Digite a constante a ser adicionada: ";
        cin >> constante;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                A[i][j] += constante;
                B[i][j] += constante;
            }
        }
        mostrarMatriz(A, "A");
        mostrarMatriz(B, "B");
        break;

    case 'd':
        mostrarMatriz(A, "A");
        mostrarMatriz(B, "B");
        break;

    default:
        cout << "Opção inválida!" << endl;
    }

    return 0;
}
