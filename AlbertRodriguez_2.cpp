//numero2

#include <stdio.h>
#include <string.h>

int main() {
    char cadena[50];
    int n;

    printf("ingresar cadena: ");
    fgets(cadena, 50, stdin);

    printf("ingresar la cantidad que desea extraer al final: ");
    scanf("%d", &n);

    int longitud = strlen(cadena);

    if (n > longitud) {
        printf("Error: los caracteres son superiores la longitud de la cadena.\n");
    } else {
        // Calculamos el índice donde comenzar a extraer los últimos n caracteres
        int inicio = longitud - n;
        printf("los ultimos %d caracteres son: %s\n", n, &cadena[inicio]);
    }

    return 0;
}

