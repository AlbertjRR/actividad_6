//nuemro 4

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[50];

    printf("ingresar cadena: ");
    fgets(cadena, 50, stdin);

    int longitud = strlen(cadena);
    int inicio = 0;

    while (isspace(cadena[inicio])) {
        inicio++;
    }

    memmove(cadena, cadena + inicio, longitud - inicio + 1);
    printf("el resultado de la cadena es: %s\n", cadena);

    return 0;
}

