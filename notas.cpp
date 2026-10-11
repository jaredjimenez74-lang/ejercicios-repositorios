/*Realizar un programa en el cual se registren las calificaciones de 5 estudiantes 
teniendo como referencia 
I PARCIAL 25%, II PARCIAL 35% Y III PARCIAL 40% 

las notas deben ingrsarse en base a 100 , aparte con el promedio final 
mostrar una ponderacion de acuerdo a la siguiente tabla 
100 - 90 = Sobresaliente, 
89 - 80 = Notable,
79 - 70 = Aprobado,     
69 - 60 = Regular,
59 - 0 = Reprobado*/

/*Wilson Jared Figueroa J.  
N.CUENTA: 20191032315*/

#include <iostream> // Librería para entrada y salida de datos
#include <cmath> // Librería para funciones matemáticas como round

using namespace std; // Usar el espacio de nombres estándar para evitar escribir std:: antes de cout y cin

// Función para obtener la ponderación según el promedio
string obtenerPonderacion(float promedio) { 
    if (promedio >= 90 && promedio <= 100) return "Sobresaliente";
    else if (promedio >= 80) return "Notable";
    else if (promedio >= 70) return "Aprobado";
    else if (promedio >= 60) return "Regular";
    else return "Reprobado";
}

// Función principal del programa
int main() {
    // Variables para almacenar las notas de los parciales y el promedio final
    float parcial1, parcial2, parcial3, promedio; 
    // Bucle para ingresar las notas de 5 estudiantes
    for (int i = 0; i < 5; i++) {
        cout << "\nEstudiante " << (i + 1) << endl;
    
        cout << "Ingrese nota del I Parcial (25%): ";
        cin >> parcial1;
        
        cout << "Ingrese nota del II Parcial (35%): ";
        cin >> parcial2;
        
        cout << "Ingrese nota del III Parcial (40%): ";
        cin >> parcial3;
        
        // Calcular promedio ponderado
        promedio = (parcial1 * 0.25) + (parcial2 * 0.35) + (parcial3 * 0.40);
        
        cout << "Promedio final    : " << promedio << endl;
        cout << "Calificación final: " << round(promedio) << endl;
        cout << "Ponderacion       : " << obtenerPonderacion(promedio) << endl;
    }
    
    return 0;
}