#include <iostream>
using namespace std;

int jogo[3][3];

void baseJogo()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            jogo[i][j] = 0;
        }
    }
}

void mostrarJogo()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << jogo[i][j] << " ";
        }
        cout << endl;
    }
}

void inserirCasa()
{
    for (int i = 0; i < 2; i++)
    {
        int lin, col;
        cout << "Jogador " << i + 1 << endl;
        cout << "Insira a linha da casa: ";
        cin >> lin;
        cout << "Insira a coluna da casa: ";
        cin >> col;
        if (i == 0)
        {
            jogo[lin - 1][col - 1] = -1;
        }
        else if (i == 1)
        {
            jogo[lin - 1][col - 1] = 1;
        }
        mostrarJogo();
    }
}

int main()
{
    mostrarJogo();
    for (int i = 0; i < 4; i++)
    {
        inserirCasa();
    }
    mostrarJogo();
}
