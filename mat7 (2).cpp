#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void gerarMatriz(int matriz[10][10]) {
  for (int i = 0; i < 10; i++) {
  for (int j = 0; j < 10; j++) {
  if (i < j) {
   matriz[i][j] = 2*i + 7*j;
} else if (i == j) {
matriz[i][j] = 3*i*i;
} else {
matriz[i][j] = 4*i*i*i + 5*j*j + 1;
}
}
}
}
void imprimirMatriz(int matriz[10][10]) {
for (int i = 0; i < 10; i++) {
for (int j = 0; j < 10; j++) {
cout << matriz[i][j] << " ";
}
cout << endl;
}
}
int main() {
    int matriz[10][10];
    gerarMatriz(matriz);
    imprimirMatriz(matriz);
    return 0;
}
