#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;
void gerarMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 20 + 1;
        }
    }
}
void matrizTriangularInferior(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            matriz[i][j] = 0;
        }
    }
}
void imprimirMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int matriz_original[4][4];
    int matriz_transformada[4][4];
    srand(time(nullptr));
    gerarMatriz(matriz_original);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz_transformada[i][j] = matriz_original[i][j];
        }
    }
    matrizTriangularInferior(matriz_transformada);
    cout << "Matriz Original:\n";
    imprimirMatriz(matriz_original);
    cout << "\n";
    cout << "Matriz Transformada (Matriz Triangular Inferior):\n";
    imprimirMatriz(matriz_transformada);

    return 0;
}
