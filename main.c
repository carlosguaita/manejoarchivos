#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    char nombres[5][2][50]={{"a01","Carlos"},{"a02","Juan"},{"a03","Ana"},{"a04","Lucia"},{"a05","Maria"}};
    
    char nombreArchivo[50]="nombres";
    crearArchivo(nombreArchivo);
    escribirArchivo(nombreArchivo,nombres);
    leerArchivo(nombreArchivo);
    
    return 0;
}

