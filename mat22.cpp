#include <iostream>
using namespace std;

int matA[3][3], matB[3][3], matC[3][3];

void inserirMatrizes()
{
    cout << "Insira os elementos da matriz A:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matA[i][j];
        }
        cout << endl;
    }

    cout << "A matriz A sera: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matA[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Insira os elementos da matriz B:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matB[i][j];
        }
        cout << endl;
    }

    cout << "A matriz B sera: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matB[i][j] << " ";
        }
        cout << endl;
    }
}

void calcularMatrizC()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matC[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    cout <<  "O produto entre essas duas matrizes sera: " << endl;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matC[i][j] << " ";
        }
        cout << endl;
    }

}

int main()
{
    inserirMatrizes();
    calcularMatrizC();
}
