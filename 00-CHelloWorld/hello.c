#include <stdio.h>

int main() {
    const char* archivo = "output.txt";
    FILE* Archivo = fopen(archivo, "w");

    printf("Hello world!\n");
    fprintf(Archivo, "Hello world!\n");

    fclose(Archivo);
	return 0;
}

