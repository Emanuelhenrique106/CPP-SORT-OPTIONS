#include <iostream>
using namespace std;

int main() {
    int I;
    double A, B, C, temp;

    // Entrada de dados
    cout << "Digite um valor inteiro e positivo para I (1, 2 ou 3): ";
    cin >> I;

    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;
    cout << "Digite o valor de C: ";
    cin >> C;

    switch (I) {
        // Caso 1: ordem crescente
        case 1:
            // Ordena manualmente os três valores em ordem crescente
            if (A > B) { temp = A; A = B; B = temp; }
            if (A > C) { temp = A; A = C; C = temp; }
            if (B > C) { temp = B; B = C; C = temp; }

            cout << "\nValores em ordem crescente: " << A << ", " << B << ", " << C << endl;
            break;

        // Caso 2: ordem decrescente
        case 2:
            if (A < B) { temp = A; A = B; B = temp; }
            if (A < C) { temp = A; A = C; C = temp; }
            if (B < C) { temp = B; B = C; C = temp; }

            cout << "\nValores em ordem decrescente: " << A << ", " << B << ", " << C << endl;
            break;

        // Caso 3: maior valor no meio
        case 3:
            // Primeiro, encontra o maior e coloca ele no meio
            if ((A > B && A > C))
                cout << "\nOrdem: " << B << ", " << A << ", " << C << endl;
            else if ((B > A && B > C))
                cout << "\nOrdem: " << A << ", " << B << ", " << C << endl;
            else
                cout << "\nOrdem: " << A << ", " << C << ", " << B << endl;
            break;

        // Caso inválido
        default:
            cout << "\nValor invalido para I! Digite 1, 2 ou 3." << endl;
    }

    return 0;
}