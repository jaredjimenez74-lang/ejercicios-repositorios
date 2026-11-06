# include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool esSoloTexto(const string& str) {
    for (char c : str) {
        if (!isalpha(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    float cantidadCarneMolida, cantidadCarneCerdo, cantidadCarneAsar,
          totalCarneMolida, totalCarneCerdo, totalCarneAsar,totalTomate, totalRepollo, totalPapas, totalCervezaNacional, totalCervezaExtrangera, totalVino, totalVodka;
    float cantidadCervezaNacional, cantidadCervezaExtrangera, cantidadVino,
          cantidadVodka;
    int tipoCliente, edadCliente, seleccionArea, seleccionVerdura, cantidadTomate, cantidadRepollo, cantidadPapas,
        seleccionCarne, seleccionLicores;
    string nombreCliente;
    
    cout << "***BIEMVENIDO A PUMA SUPERMARKET***\n" << endl;

    cout << "seleccione el tipo de cliente\n" << endl;
    cout << "1. Cliente Estrella" <<endl;
    cout << "2. Cliente Regular" <<endl;
    cout << "3. Cliente Nuevo" <<endl;
    cin >> tipoCliente; 

    do
    {
     cout << "Nombre del cliente: " << endl;
     cin >> nombreCliente;
     if  (!esSoloTexto(nombreCliente))
      cout << "Error: El nombre del cliente debe contener solo letras." << endl;
     
    } while (!esSoloTexto(nombreCliente));
    
   while (true)
   {
     cout << "Edad:" << endl;
     cin >> edadCliente;
     if (cin.fail()) {
        cout << "Error: La edad del cliente debe ser un numero entero." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
     }else{
        cin.ignore(1000, '\n');
        break;
     }
   }
   cin.ignore();1
   switch (expression)
   {
   case constant expression:
    /* code */
    break;
   
   default:
    break;
   }
   cout << "---Seleccione el Area a la que quiere ingresar---\n" << endl;
   cout << "1. Area de Verduras" << endl;
   cout << "2. Area de Carnes " << endl;
   cout << "3. Area de Licores" << endl;
   cin >> seleccionArea;
   cout << "\n";
   if (seleccionArea == 1) {
        cout << "Bienvenido a la Area de Verduras" << endl;
        cout << "  Producto          Precio" << endl;
        cout << "---------------------------" << endl;
        cout << "1. Tomate        L. 10 / lb" << endl;
        cout << "2. Repollo       L. 15 / lb" << endl;
        cout << "3. Papas         L. 17 / lb" << endl;
        cin >> seleccionVerdura;
        cout << "\n";
        if (seleccionVerdura == 1) {
            cout << "Tomate seleccionado." << endl;
             cout << " seleccione la cantidad de libras que desea comprar: " << endl;
            cin >> cantidadTomate;
            float precioTomate = 10.0;
            float totalTomate = precioTomate * cantidadTomate;
        } else if (seleccionVerdura == 2) {
            cout << "Repollo seleccionado." << endl;
            cout << " seleccione la cantidad de libras que desea comprar: " << endl;
            cin >> cantidadRepollo;
            float precioRepollo = 15.0;
            float   totalRepollo = precioRepollo * cantidadRepollo;
        } else if (seleccionVerdura == 3) {
            cout << "Papas seleccionadas." << endl;
            cout << " seleccione la cantidad de libras que desea comprar: " << endl;
            cin >> cantidadPapas;
            float precioPapas = 17.0;
            float totalPapas = precioPapas * cantidadPapas;
        } else {
            cout << "Error: Seleccion de verdura invalida." << endl;
        }
    
    } else if (seleccionArea == 2) {
        cout << "Bienvenido al Area de Carnes" << endl;
        cout << "  Producto             Precio" << endl;
        cout << "-------------------------------" << endl;
        cout << "4. Carne Molida      L. 50 / lb" << endl;
        cout << "5. Carne de Cerdo    L. 70 / lb" << endl;
        cout << "6. Carne para asar   L. 75 / lb" << endl;
        cin >> seleccionCarne;
        //validacion de la seleccion de carne
        if (seleccionCarne == 4) {
            cout << "Carne Molida seleccionada." << endl;
            cout << " seleccione la cantidad de libras que desea comprar: " << endl;
            cin >> cantidadCarneMolida;
            float precioCarneMolida = 50.0;
            float totalCarneMolida = precioCarneMolida * cantidadCarneMolida;
        } else if (seleccionCarne == 5) {
            cout << "Carne de Cerdo seleccionada." << endl;
            cout << " seleccione la cantidad de libras que desea comprar: " << endl;
            cin >> cantidadCarneCerdo;
            float precioCarneCerdo = 70.0;
            float totalCarneCerdo = precioCarneCerdo * cantidadCarneCerdo;
        } else if (seleccionCarne == 6) {
            cout << "Carne para asar seleccionada." << endl;
            cout << " seleccione la cantidad de libras que desea comprar: " << endl;
            cin >> cantidadCarneAsar;
            float precioCarneAsar = 75.0;
            float totalCarneAsar = precioCarneAsar * cantidadCarneAsar;
        } else {
            cout << "Error: Seleccion de carne invalida." << endl;
        }

    } else if (seleccionArea == 3) {
        cout << "Bienvenido a la Area de Licores" << endl;
        cout << "  Producto               Precio" << endl;
        cout << "---------------------------------" << endl;
        cout << "7. Cerveza Nacional     L. 50.00 /unidad " << endl;
        cout << "8. CErveza Extrangera   L. 80.00 /unidad" << endl;
        cout << "9  Vino                  L. 200.00 / botella" << endl;
        cout << "10. VodKa               L. 100.00 / botella" << endl;
        cin >> seleccionLicores;
        if (seleccionLicores == 7) {
            cout << "Cerveza Nacional seleccionada." << endl;
            cout << " seleccione la cantidad que desea comprar: " << endl;
            cin >> cantidadCervezaNacional;
            float precioCervezaNacional = 50.0;
            float totalCervezaNacional = precioCervezaNacional * cantidadCervezaNacional;
        } else if (seleccionLicores == 8) {
            cout << "CErveza Extrangera seleccionada." << endl;
            cout << " seleccione la cantidad que desea comprar: " << endl;
            cin >> cantidadCervezaExtrangera;
            float precioCervezaExtrangera = 80.0;
            float totalCervezaExtrangera = precioCervezaExtrangera * cantidadCervezaExtrangera;
        } else if (seleccionLicores == 9) {
            cout << "Vino seleccionado." << endl;
            cout << " seleccione la cantidad que desea comprar: " << endl;
            cin >> cantidadVino;
            float precioVino = 200.0;
            float totalVino = precioVino * cantidadVino;
        } else if (seleccionLicores == 10) {
            cout << "VodKa seleccionada." << endl;
            cout << " seleccione la cantidad que desea comprar: " << endl;
            cin >> cantidadVodka;
            float precioVodka = 100.0;
            float totalVodka = precioVodka * cantidadVodka;
        } else {
            cout << "Error: Seleccion de licor invalida." << endl;
        }
    } else {
        cout << "Error: Seleccion de area invalida." << endl;
    }

    return 0;
}
