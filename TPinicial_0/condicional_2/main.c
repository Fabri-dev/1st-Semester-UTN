#include <stdio.h>
#include <stdlib.h>
//En un almac�n se hace un 20% de descuento a los clientes cuya compra supere los $5000
//�Cu�l ser� la cantidad que pagar� una persona por su compra?



int main()
{
    int descuento;
    float compra, compracondes;
        printf("cual es el monto de la compra?\n");

        scanf("%f",&compra);

        printf("ingrese el descuento para aplicar a la compra\n");

        scanf("%i",&descuento);

    compracondes= compra - compra * descuento/100 ;
    printf("Su compra con descuento es: %.2f", compracondes) ;
    return 0;
}
