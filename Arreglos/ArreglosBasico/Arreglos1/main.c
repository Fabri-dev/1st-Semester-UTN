#include <stdio.h>
#include <stdlib.h>
/*
Hacer una funci�n que reciba como par�metro un arreglo de
n�meros enteros y permita que el usuario ingrese valores al mismo por teclado.
La funci�n debe retornar la cantidad de elementos cargados en el arreglo (o pueden utilizar como puntero v�lidos).

*/
int CargarArr_DevolverValidos(int arr[], int dimension);

int main()
{
    int arr[20];
    int dimension = 20, validos;
    validos= CargarArr_DevolverValidos(arr,dimension);
    printf("Los elementos validos en el arreglo son: %i", validos);
    return 0;
}


