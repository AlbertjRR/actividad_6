//numero 7

#include <stdio.h>
#include <string.h>

void insertarCadena(char *cadena, char *cadenaAinsertar, int posicion) {
    memmove(&cadena[posicion + strlen(cadenaAinsertar)], &cadena[posicion], strlen(cadena) - posicion + 1);
    memcpy(&cadena[posicion], cadenaAinsertar, strlen(cadenaAinsertar));
}

int main() {
    char cadena[50];
    char cadenaAinsertar[25];
    int posicion;

    printf("}ingresar cadena: ");
    fgets(cadena, 50, stdin);

    printf("ingresar cadena a insertar: ");
    fgets(cadenaAInsertar, 25, stdin);

    printf("ingresar posición para insertar: ");
    scanf("%d", &posicion);

    insertarCadena(cadena, cadenaAinsertar, posicion);

    printf("el resultadoe es: %s\n", cadena);

    return 0;
}

