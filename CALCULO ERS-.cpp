#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sueldoMensual, sueldoAnual, isrAnual, isrMensual;

    cout << "=== CALCULO DEL ISR - REPUBLICA DOMINICANA 2026 ===" << endl;
    cout << "Ingrese el sueldo mensual del empleado (RD$): ";
    cin >> sueldoMensual;

    if (sueldoMensual < 0) {
        cout << "Error: el sueldo no puede ser negativo." << endl;
        return 1;
    }

    // La escala de la DGII es anual, por eso se multiplica por 12
    sueldoAnual = sueldoMensual * 12;

    if (sueldoAnual <= 416220.00) {
        isrAnual = 0;                                            // Exento
    }
    else if (sueldoAnual <= 624329.00) {
        isrAnual = (sueldoAnual - 416220.00) * 0.15;             // 15%
    }
    else if (sueldoAnual <= 867123.00) {
        isrAnual = 31216.00 + (sueldoAnual - 624329.00) * 0.20;  // 20%
    }
    else {
        isrAnual = 79776.00 + (sueldoAnual - 867123.00) * 0.25;  // 25%
    }

    isrMensual = isrAnual / 12;

    cout << fixed << setprecision(2);
    cout << "\n----------------------------------------" << endl;
    cout << "Sueldo mensual:        RD$ " << sueldoMensual << endl;
    cout << "Sueldo anual:          RD$ " << sueldoAnual << endl;

    if (isrMensual == 0) {
        cout << "Descuento ISR mensual: 0 (N/A - Exento)" << endl;
    }
    else {
        cout << "Descuento ISR mensual: RD$ " << isrMensual << endl;
        cout << "Descuento ISR anual:   RD$ " << isrAnual << endl;
        cout << "Sueldo neto mensual:   RD$ " << sueldoMensual - isrMensual << endl;
    }
    cout << "----------------------------------------" << endl;

    return 0;
}