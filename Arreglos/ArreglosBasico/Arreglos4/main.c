#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
/*
Hacer una funci�n que reciba como par�metro un arreglo, la cantidad de
elementos (v�lidos) cargados en �l y una Pila. La funci�n debe copiar los elementos del arreglo en la pila.

*/
int CargarArr_DevolverValidos(int arr[], int dimension);
void CargarElementosAPila(int arr[],int validos, Pila* carlostevez);

int main()
{
    int arr[20];
    int dimension = 20, validos;
    Pila dada;
    inicpila(&dada);
    validos= CargarArr_DevolverValidos(arr,dimension);
    CargarElementosAPila(arr,validos,&dada);
    mostrar(&dada);
    return 0;
}

int CargarArr_DevolverValidos(int arr[], int dimension)
{
    char op;
    int i;
    do {
        printf("Ingrese un valor al arreglo: ");
        fflush(stdin);
        scanf("%i", &arr[i]);
        i++;
        printf("Desea continuar? s/n: ");
        fflush(stdin);
        scanf("%c", &op);

    }while(op == 's' && i < dimension);

    return i;
}

void CargarElementosAPila(int arr[],int validos, Pila* carlostevez)
{
    for (int i= 0; i < validos; i++)
    {
        apilar(carlostevez, arr[i]);
    }
}
