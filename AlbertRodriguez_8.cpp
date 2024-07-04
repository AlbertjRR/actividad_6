//numero 8

#include <stdio.h>
#include <string.h>

void sustitucion(char *cadena, char *Buscarcadena, char *cadenaNueva) {
    char *posicion = strstr(cadena, Buscarcadena);

    if (posicion != NULL) {
        memmove(posicion + strlen(cadenaNueva), posicion + strlen(Buscarcadena), strlen(posicion + strlen(Buscarcadena)) + 1);
        memcpy(posicion, cadenaNueva, strlen(cadenaNueva));
    }
}

int main() {
    char cadena[50];
    char Buscarcadena[25];
    char cadenaNueva[25];

    printf("ingresar cadena: ");
    fgets(cadena, 50, stdin);

    printf("ingresa subcadena: ");
    fgets(Buscarcadena, 25, stdin);

    printf("ingresar nueva subcadena: ");
    fgets(cadenaNueva, 25, stdin);

    sustituir(cadena, Buscarcadena, cadenaNueva);

    printf("cadena resultante es: %s\n", cadena);

    return 0;
}

