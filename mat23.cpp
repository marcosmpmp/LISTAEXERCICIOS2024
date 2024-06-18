#include <iostream>
using namespace std;

int matA[3][3], matB[3][3];

void inserirMatriz()
{
    cout << "Insira os elementos da matriz:" << endl;
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
}

void quadradoDaMatriz()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matB[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                matB[i][j] += matA[i][k] * matA[k][j];
            }
        }
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

int main()
{
    inserirMatriz();
    quadradoDaMatriz();
}
