#include <stdio.h>
#include "funciones.h"

void crearArchivo(char nombreArchivo[]){
    FILE *archivo;
    archivo=fopen("nombre","w+");
    if (archivo==NULL)
    {
        printf("no se pudo abrir el archivo");
    }
    fclose(archivo);
}

void escribirArchivo(char nombreArchivo[],char nombres[5][2][50]){
    FILE *archivo;
    archivo=fopen("nombre","r+");
    if (archivo==NULL)
    {
        printf("no se pudo abrir el archivo");
    }
    for (int i = 0; i < 5; i++)
    {
         fprintf(archivo,"%s %s\n",nombres[i][0],nombres[i][1]);
    }
    fclose(archivo);
}

void leerArchivo(char nombreArchivo[]){
    FILE *archivo;
    char id[50];
    char nombre[50];
    archivo=fopen("nombre","r+");
    if (archivo==NULL)
    {
        printf("no se pudo abrir el archivo");
    }
    for (int i = 0; i < 5; i++)
    {
         fscanf(archivo,"%s %s",&id,&nombre);
         printf("%s %s\n",id,nombre);
    }
    fclose(archivo);
}