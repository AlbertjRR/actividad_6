//numero 3

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[50];

    printf("ingresar cadena: ");
    fgets(cadena, 50, stdin);

    int longitud = strlen(cadena);

    while (longitud > 0 && isspace(cadena[longitud - 1])) {
        cadena[longitud - 1] = '\0';
        longitud--;
    }

    printf("la cadena al final es: %s\n", cadena);

    return 0;
}

