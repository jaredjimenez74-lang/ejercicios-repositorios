/*wilson jared figueroa jimenez 
#cuenta:20191032315*/

#include <iostream>
#include <string>


using namespace std;

int main() {
    // DATOS DEL CLIENTE 
    cout << "==== BIENVENIDO A PUMA MARKET ====" << endl;
    string nombreCliente;
    cout << "Ingrese su nombre: ";
    cin >> nombreCliente;
    
    cout << "Ingrese su edad: ";
    int edadCliente;
    cin >> edadCliente;

    int opcionArea = 0;

    // SELECCIÓN DE ÁREA CON VALIDACIÓN DE EDAD PARA LICORES 
    do {
        cout << "\nSeleccione el tipo de Area" << endl;
        cout << "============================" << endl;
        cout << "|    1. Verduras           |" << endl;
        cout << "|    2. Carnes             |" << endl;
        cout << "|    3. Licores            |" << endl;
        cout << "============================" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcionArea;

        if (opcionArea == 3) {
            if (edadCliente < 18) {
                cout << "\n[ACCESO DENEGADO] No puede comprar licores por ser menor de edad. Regresando al menu...\n" << endl;
            }
        }
    } while (opcionArea == 3 && edadCliente < 18);

    int codigoProducto = 0;
    float cantidad = 0;
    float precioUnitario = 0;
    string nombreProducto = "";
    int areaActual = opcionArea;

    // ESTRUCTURA SWITCH PARA SELECCIÓN DE PRODUCTOS 
    switch(opcionArea) {
        case 1: // Verduras
            cout << "\n--- Bienvenida a la sección de Verduras ---" << endl;
            cout << "============================" << endl;
            cout << "1. Tomate   L. 10.00 Lb     " << endl;
            cout << "2. Repollo  L. 15.00 Lb     " << endl;
            cout << "3. Papa     L. 17.00 Lb     " << endl;
            cout << "============================" << endl;
            cout << "Ingrese el codigo del producto: ";
            cin >> codigoProducto;
            
            cout << "Ingrese la cantidad de libras que desea comprar: ";
            cin >> cantidad;

            if (codigoProducto == 1) {
                nombreProducto = "Tomate";
                precioUnitario = 10.00;
            } else if (codigoProducto == 2) {
                nombreProducto = "Repollo";
                precioUnitario = 15.00;
            } else if (codigoProducto == 3) {
                nombreProducto = "Papa";
                precioUnitario = 17.00;
            } else {
                cout << "Opción no válida." << endl;
                return 0;
            }
            break;
            
        case 2: // Carnes
            cout << "\n--- Bienvenida a la seccion de Carnes ---" << endl;
            cout << "===================================" << endl;
            cout << "4. Carne molida    L. 50.00 Lb" << endl;
            cout << "5. Carne de cerdo  L. 70.00 Lb" << endl;
            cout << "6. Carne para asar L. 75.00 Lb" << endl;
            cout << "===================================" << endl;
            cout << "Ingrese el codigo del producto: ";
            cin >> codigoProducto;
            
            cout << "Ingrese la cantidad de libras que desea comprar: ";
            cin >> cantidad;

            if (codigoProducto == 4) {
                nombreProducto = "Carne molida";
                precioUnitario = 50.00;
            } else if (codigoProducto == 5) {
                nombreProducto = "Carne de cerdo";
                precioUnitario = 70.00;
            } else if (codigoProducto == 6) {
                nombreProducto = "Carne para asar";
                precioUnitario = 75.00;
            } else {
                cout << "Opción no válida." << endl;
                return 0;
            }
            break;
            
        case 3: // Licores
            cout << "\n--- Bienvenida a la sección de Licores ---" << endl;
            cout << "=========================================" << endl;
            cout << "7. Cerveza Nacional   L.  50.00 / unidad" << endl;
            cout << "8. Cerveza Extranjera L.  80.00 / unidad" << endl;
            cout << "9. Vino               L. 200.00 / botella" << endl;
            cout << "10. Vodka             L. 100.00 / botella" << endl;
            cout << "=========================================" << endl;
            cout << "Ingrese el codigo del producto: ";
            cin >> codigoProducto;
            
            cout << "Ingrese la cantidad que desea comprar: ";
            cin >> cantidad;

            if (codigoProducto == 7) {
                nombreProducto = "Cerveza Nacional";
                precioUnitario = 50.00;
            } else if (codigoProducto == 8) {
                nombreProducto = "Cerveza Extranjera";
                precioUnitario = 80.00;
            } else if (codigoProducto == 9) {
                nombreProducto = "Vino";
                precioUnitario = 200.00;
            } else if (codigoProducto == 10) {
                nombreProducto = "Vodka";
                precioUnitario = 100.00;
            } else {
                cout << "Opción no válida." << endl;
                return 0;
            }
            break;
            
        default:
            cout << "Opcion no válida." << endl;
            return 0;
    }

    // TIPO DE CLIENTE PARA DESCUENTOS 
    int tipoCliente;
    cout << "\n=== TIPO DE CLIENTE ===" << endl;
    cout << "1. Estrella (4% en carnes y verduras)[cite: 8, 9]" << endl;
    cout << "2. Regular (3% en carnes)[cite: 9]" << endl;
    cout << "3. Nuevo (2% en licores)[cite: 9]" << endl;
    cout << "4. Normal (Sin descuento)" << endl;
    cout << "Ingrese su tipo de cliente: ";
    cin >> tipoCliente;

    // CÁLCULOS FINANCIEROS 
    float subtotal = precioUnitario * cantidad;
    float descuento = 0;

    if (tipoCliente == 1) { // Estrella: 4% en carnes y verduras
        if (areaActual == 1 || areaActual == 2) {
            descuento = subtotal * 0.04;
        }
    } else if (tipoCliente == 2) { // Regular: 3% en carnes
        if (areaActual == 2) {
            descuento = subtotal * 0.03;
        }
    } else if (tipoCliente == 3) { // Nuevo: 2% en licores
        if (areaActual == 3) {
            descuento = subtotal * 0.02;
        }
    }

    float subtotalConDescuento = subtotal - descuento;
    float impuesto = subtotalConDescuento * 0.15; // ISV 15%
    float totalPagar = subtotalConDescuento + impuesto;

    //  FACTURA FINAL 
    cout << "\n=========================================" << endl;
    cout << "           FACTURA PUMA MARKET           " << endl;
    cout << "=========================================" << endl;
    cout << "Cliente:                   " << nombreCliente << endl;
    cout << "Edad:                      " << edadCliente << " años" << endl;
    cout << "Producto:                  " << nombreProducto << endl;
    cout << "Cantidad:                  " << cantidad << endl;
    cout << "Precio Unitario:        L. " << precioUnitario << endl;
    cout << "Subtotal:               L. " << subtotal << endl;
    cout << "Descuento aplicado:     L. " << descuento << endl;
    cout << "Subtotal con descuento: L. " << subtotalConDescuento << endl;
    cout << "Impuesto (ISV 15%):     L. " << impuesto << endl;
    cout << "-----------------------------------------" << endl;
    cout << "TOTAL A PAGAR:          L. " << totalPagar << endl;
    cout << "=========================================" << endl;

    return 0;
}