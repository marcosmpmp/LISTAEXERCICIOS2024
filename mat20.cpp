#include <iostream>
using namespace std;

int mat[3][6];

void mostrarMatriz()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void inserirMatriz()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "Insira o numero na linha " << i + 1 << " da coluna " << j + 1 << ": ";
            cin >> mat[i][j];
        }
        cout << endl;
    }

    cout << "A matriz ficou assim: " << endl;
    mostrarMatriz();
}

void somarImpares()
{
    int impares = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (mat[i][j] % 2 != 0)
            {
                impares += mat[i][j];
            }
        }
    }
    cout << "A soma dos numeros impares e igual a: " << impares << endl;
}

void mediasAritimeticas()
{
    float soma2 = 0;
    float soma4 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if ((j + 1) == 2)
            {
                soma2 += mat[i][j];
            }
            else if ((j + 1) == 4)
            {
                soma4 += mat[i][j];
            }
        }
    }
    cout << "A media aritimetica da coluna 2 e: " << soma2 / 3 << endl;
    cout << "A media aritimetica da coluna 4 e: " << soma4 / 3 << endl;
}

void mudarColuna6()
{
    for (int i = 0; i < 3; i++)
    {
        mat[i][5] = mat[i][0] + mat[i][1];
        cout << mat[i][0] << " + " << mat[i][1] << " = " << mat[i][0] + mat[i][1] << endl;
    }
    cout << "A matriz modificando a coluna 6 para a soma das colunas 1 e 2 ficou assim: " << endl;
    mostrarMatriz();
}

int main()
{
    inserirMatriz();
    somarImpares();
    mediasAritimeticas();
    mudarColuna6();
}
