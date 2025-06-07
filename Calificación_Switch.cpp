#include <iostream>
using namespace std;

int main(){
    int Nota;
    cout << "Ingrese la calificación (A, B, C, D, F):\n";
    cin >> Nota;

    switch(Nota){
        case 1:
        cout << "Excelente.\n";
        break;
        case 2:
        cout << "Muy bueno.\n";
        break;
        case 3:
        cout << "Bueno.\n";
        break;
        case 4:
        cout << "Malo.\n";
        break;
        case 5:
        cout << "Reprobado.\n";
        break;
        default:
        cout << "ERROR.\n";
        break;
    }

    return 0;
}