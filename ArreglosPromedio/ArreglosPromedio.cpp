#include <iostream>
using namespace std;
int main()
{
    double nd, s{}, p;
    int n{}, x[20];
    cout << "Introduce el numero de datos (hasta 20): ";
    cin >> nd;
    if ((nd < 1) || (nd > 20)) {
        cout << "Introduce un valor correcto";
    } else {
        do {
            cout << "Introduce la siguiente calificacion: ";
            cin >> x[n];
            s = s + x[n];
            p = s / nd;
            n++;
        } while (n < nd);

        cout << "El promedio es: " << p;
    }
}