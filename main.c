// Bruno Portilla Hinojosa
// ITESM 
#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    double average = 0;
    int min;
    int max;
    int menu;
    // le digo al usuario lo que hara el porgrama
    printf("en este programa me daras los numeros que quieras \ny hare lo que me pidas con ellos.\n");
// pido cuantos numeros para ver cuantos numeros tendra el array
    printf("Cuantos numeros vas a insertar:\n");
    scanf("%d", &n);
// asigno la cantidad de numeros en el array como n
    int numeros[n];

    for (int i = 0; i < n; i++) { //pido los valores
        printf("Inserte los numeros uno por uno:\n");
        scanf("%i", &numeros[i]);
    }
    //Hago la suma y el promedio
    for(int i = 0; i < n; ++i) {
        sum += numeros[i];
    }

    average = sum / n;

    //sacar minimo
    for (int i = 0; i < n; i++) {
        if (numeros[i] < min) {
            min = numeros[i];
        }
    }

    // sacar maximo.
    for (int i = 0; i < n; i++) {
        if (numeros[i] > max) {
            max = numeros[i];
        }
    }
//muestro el menu
    printf("Que quieres hacer con los numeros?\n1.- Sacar la suma\n2.-Sacar el Promedio\n3.-mostrar el numero mas pequeño\n4.-mostrar el numero mas grande.\n Escribe la opcion:");
    scanf("%d", &menu);

    switch (menu){ //muestro lo que el usuario me pida.
        case 1:
            printf("la suma es de: %d", sum);
            break;
        case 2:
            printf("el promedio es de: %lf", average);
            break;
        case 3:
            printf("el numero mas pequeño es: %d", min);
            break;
        case 4:
            printf("el numero mas grande es: %d", max);
            break;
        default:
            printf("elige una opcion valida.");
    }
    return 0;
}