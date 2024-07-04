//numero 5

#include <stdio.h>
#include <string.h>

void eliminarCaracteres(char *cadena, int opcion, int cant) {
    memmove(&cadena[opcion], &cadena[opcion + cant], strlen(cadena) - cant - opcion + 1);
}

int main() {
    char cadena[50];
    int opcion, cant;

    printf("ingresar cadena: ");
    fgets(cadena, 50, stdin);

    printf("Dingresar la opcion a eliminar: ");
    scanf("%d", &opcion);

    printf("ingresa los caracteres a eliminar: ");
    scanf("%d", &cant);

    eliminarCaracteres(cadena, opcion, cant);

    printf("el resultado es: %s\n", cadena);

    return 0;
}

