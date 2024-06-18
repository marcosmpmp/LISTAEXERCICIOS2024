#include <iostream>
using namespace std;

int mat[3][3], arr[3];

void inserirMatriz()
{
    cout << "Insira a matriz (3x3): ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
        cout << endl;
    }
}

void mostrarMatriz()
{
    cout << "A soma dos valores das colunas da matriz: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Sera um array " << endl;
}

void criarArray()
{
    for (int i = 0; i < 3; i++)
    {
        arr[i] = 0;
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i] += mat[j][i];
        }
        cout << endl;
    }
}

void mostrarArray() {
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main()
{
    inserirMatriz();
    mostrarMatriz();
    criarArray();
    mostrarArray();
}
