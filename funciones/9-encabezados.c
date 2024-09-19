#include <stdio.h>
#include "9-encabezados.h"

int main() {

    int v;
    int m;

    // Llama a las 3 funciones
    funcion1();
    funcion2(5, 2.67);
    v = funcion3(10);
    m = funcion4(10); // se llama a la funcion 4 que se solicitaba

    // Imprime el valor que retornó funcion3()
    printf("v = %d\n", v);
    //se imprime el valor que retorna la funcion 4
    printf("m = %d\n", m);

    return 0;

}

// funcion1(): Imprime un mensaje
void funcion1() {
    printf("En funcion1()...\n");
}

// funcion2(): Imprime un mensaje y las variables que recibe como argumento
void funcion2(int a, float b) {
    printf("En funcion2()...\n");
    printf("a = %d, b = %.2f\n", a, b);
}

// funcion3(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado en 2
int funcion3(int x) {
    printf("En funcion3()...\n");
    int y = x + 2;
    return y;
}

int funcion5(int x) {
    printf("en funcion5");
int funcion4(int x) {
    printf("En funcion4()");
    return x;
}
}
//creacion de la funcion 4 que se pidio
int funcion4(int x) {
    printf("En funcion4()...\n");
    int y = x - 2;
    return y;
}

