#include <iostream>
#include <string>

using namespace std;

//Programa de compra de maltas y refrescos

int main() {

int bucle=1;
    string razonSocial;
    string rifCedula;
    int cantidadRefrescos, cantidadMaltas;

    const float precioRefrescoDetal = 10.0;
    const float precioRefrescoMayor = 5.0;
    const float precioMaltasDetal = 12.0;
    const float precioMaltasMayor = 7.0;
    const int cantidadMinimaMayor = 6;
   
    while (bucle == 1){


    cout << "Ingrese la razón social del cliente: ";
    getline(cin, razonSocial);
    cout << "Ingrese el RIF/Cédula del cliente: ";
    getline(cin, rifCedula);

    cout << "Ingrese la cantidad de refrescos a comprar: ";
    cin >> cantidadRefrescos;
    cout << "Ingrese la cantidad de maltas a comprar: ";
    cin >> cantidadMaltas;

    // Calcular monto total por tipo de producto'
    float totalRefrescos;
    if (cantidadRefrescos >= cantidadMinimaMayor) {
        totalRefrescos = cantidadRefrescos * precioRefrescoMayor;
    } else {
        totalRefrescos = cantidadRefrescos * precioRefrescoDetal;
    }

    float totalMaltas;
    if (cantidadMaltas >= cantidadMinimaMayor) {
        totalMaltas = cantidadMaltas * precioMaltasMayor;
    } else {
        totalMaltas = cantidadMaltas * precioMaltasDetal;
    }

    // Calcular monto total a pagar
    float montoTotal = totalRefrescos + totalMaltas;

    cout << "\n--- Resumen de compra ---\n";
    cout << "Cliente: " << razonSocial << endl;
    cout << "RIF/Cédula: " << rifCedula << endl;
    cout << "Total a pagar por refrescos: $" << totalRefrescos << endl;
    cout << "Total a pagar por maltas: $" << totalMaltas << endl;
    cout << "Monto total a pagar: $" << montoTotal << endl;
}

     return 0;
}