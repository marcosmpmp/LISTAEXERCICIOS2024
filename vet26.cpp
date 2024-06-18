#include <iostream>
using namespace std;

int main() {
   const int n = 10;
  double v[n];
  double soma = 0.0, media = 0.0, variancia = 0.0, desvioPadrao = 0.0;

    cout << "Digite 10 números: ";
    for (int i = 0; i < n; ++i) {
      cin >> v[i];
      soma += v[i];
    }

    media = soma / n;

    for (int i = 0; i < n; ++i) {
      double diferenca = v[i] - media;
      variancia += diferenca * diferenca;
    }
    variancia /= n;

    double estimativa = variancia;
    double precisao = 0.00001;
    while ((estimativa - variancia / estimativa) > precisao) {
        estimativa = (estimativa + variancia / estimativa) / 2.0;
    }
    desvioPadrao = estimativa;

    cout << "Média: " << media << endl;
    cout << "Desvio Padrão: " << desvioPadrao << endl;

    return 0;
}
