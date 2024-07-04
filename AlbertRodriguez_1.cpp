// numero1

#include <stdio.h>
#include <string.h>

int main() {
    char cadena[50];
    int n;

    printf("ingresar cadena: ");
    fgets(cadena, 50, stdin);

    printf("ingresar cantidad de caracteres a extraer: ");
    scanf("%d", &n);

    if (n > strlen(cadena)) {
        printf("Error: los caracteres a extraer es superior a la longitud de la cadena.\n");
    } else {
        cadena[n] = '\0'; 
        printf("los primeros %d caracteres son: %s\n", n, cadena);
    }
    return 0;
}

