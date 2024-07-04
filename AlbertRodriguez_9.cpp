//numero 9

#include <stdio.h>
#include <string.h>

int contar(char *cadena, char *subcadena) {
    int contador = 0;
    char *posicion = cadena;

    while ((posicion = strstr(posicion, subcadena)) != NULL) {
        contador++;
        posicion += strlen(subcadena);
    }

    return contador;
}

int main() {
    char cadena[50];
    char subcadena[25];

    printf("ingresar cadena: ");
    fgets(cadena, 50, stdin);

    printf("ingresar subcadena: ");
    fgets(subcadena, 25, stdin);

    int contador = contar(cadena, subcadena);

    printf("subcadena '%s' aparece %d veces en la cadena.\n", subcadena, contador);

    return 0;
}

