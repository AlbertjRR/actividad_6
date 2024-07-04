//numero 6

#include <stdio.h>
#include <string.h>

void eliminarPrimeraAparicion(char *cadena, char *subcadena) {
    char *posicion = strstr(cadena, subcadena);

    if (posicion != NULL) {
        memmove(posicion, posicion + strlen(subcadena), strlen(posicion + strlen(subcadena)) + 1);
    }
}

int main() {
    char cadena[50];
    char subcadena[25];

    printf("ingresar cadena: ");
    fgets(cadena, 50, stdin);

    printf("ingresar subcadena a eliminar: ");
    fgets(subcadena, 25, stdin);

    eliminarPrimeraAparicion(cadena, subcadena);

    printf("el resultado es: %s\n", cadena);

    return 0;
}

