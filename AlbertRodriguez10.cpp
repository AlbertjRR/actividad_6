//numero10

#include <stdio.h>
#include <string.h>

void borrarApariciones(char *cadena, char *subcadena) {
    int longitudSubcadena = strlen(subcadena);
    char *posicion = cadena;

    while ((posicion = strstr(posicion, subcadena)) != NULL) {
        memmove(posicion, posicion + longitudSubcadena, strlen(posicion + longitudSubcadena) + 1);
    }
}

int main() {
    char cadena[50];
    char subcadena[25];

    printf("ingresar cadena: ");
    fgets(cadena, 50, stdin);

    printf("ingresar la subcadena a borrar: ");
    fgets(subcadena, 25, stdin);

    borrarApariciones(cadena, subcadena);

    printf("el resultadio de la cadena es: %s\n", cadena);

    return 0;
}

