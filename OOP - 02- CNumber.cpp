#include <iostream>
#include <algorithm> // Para max y min

using namespace std;

class CNumber {
private:
    int num1, num2, num3;

public:
    CNumber(int a, int b, int c) : num1(a), num2(b), num3(c) {}

    int max() {
        return ::max({num1, num2, num3});
    }


    int min() {
        return ::min({num1, num2, num3});
    }

    // c) Calcula el promedio de los 3 números
    double promedio() {
        return (num1 + num2 + num3) / 3.0;
    }

    // d) Calcula la cantidad de elementos pares
    int cantidadPares() {
        int count = 0;
        if (num1 % 2 == 0) count++;
        if (num2 % 2 == 0) count++;
        if (num3 % 2 == 0) count++;
        return count;
    }

    int cantidadImpares() {
        int count = 0;
        if (num1 % 2 != 0) count++;
        if (num2 % 2 != 0) count++;
        if (num3 % 2 != 0) count++;
        return count;
    }
};

int main() {
    CNumber numeros(5, 8, 3);

    cout << "Máximo: " << numeros.max() << endl;
    cout << "Mínimo: " << numeros.min() << endl;
    cout << "Promedio: " << numeros.promedio() << endl;
    cout << "Cantidad de pares: " << numeros.cantidadPares() << endl;
    cout << "Cantidad de impares: " << numeros.cantidadImpares() << endl;

    return 0;
}
