#include <iostream>
using namespace std;

int main() {
    int filasA, columnasA, filasB, columnasB;

    cout << "Ingrese el número de filas de la matriz A: ";
    cin >> filasA;
    cout << "Ingrese el número de columnas de la matriz A: ";
    cin >> columnasA;

    cout << "Ingrese el número de filas de la matriz B: ";
    cin >> filasB;
    cout << "Ingrese el número de columnas de la matriz B: ";
    cin >> columnasB;

    if (columnasA != filasB) {
        cout << "Error: El número de columnas de la matriz A debe ser igual al número de filas de la matriz B." << endl;
        return -1;
    }


    int A[filasA][columnasA];
    int B[filasB][columnasB];
    int C[filasA][columnasB]; 
    // Ingreso de los elementos de la matriz A
    cout << "Ingrese los elementos de la matriz A:" << endl;
    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < columnasA; ++j) {
            cin >> A[i][j];
        }
    }

    // Ingreso de los elementos de la matriz B
    cout << "Ingrese los elementos de la matriz B:" << endl;
    for (int i = 0; i < filasB; ++i) {
        for (int j = 0; j < columnasB; ++j) {
            cin >> B[i][j];
        }
    }

    // Multiplicación de matrices
    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < columnasB; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < columnasA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Mostrar resultado de la multiplicación de matrices
    cout << "Resultado del producto de matrices: " << endl;
    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < columnasB; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


