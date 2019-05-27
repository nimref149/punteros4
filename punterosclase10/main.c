#define PATH "D:datos.txt"
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
typedef struct{
int
float
int
}eEmpleado;


int main()
{
    //crear un empleado y va a recibir valores+
    // escritua y lectura de una lectura en binario
    //funcion a va a recivir el empleado
    // la otra lo va a escribir en formato binario
    //la otra lo va a leer en forma binario
    //funcion q lea ee empleado en forma binaria


 //lectura
 /*

    FILE* miArchivo;

    int* x;
    x=(int*)malloc(sizeof(int));
    miArchivo=fopen("datosss","rb");
    fread(x,sizeof(int),1,miArchivo);
    fclose(miArchivo);
    printf("%d",*x);
*/





   //escritura

/*
    FILE* miArchivo;
    int*x=(int*)malloc(sizeof(int));
    *x=4;
    miArchivo=fopen("datosss","wb");
    fwrite(x,sizeof(int),1,miArchivo);
    fclose(miArchivo);
*/

    /*
    FILE* miArchivo;

    char nombre[20]="Cristian";

    miArchivo=fopen(PATH,"w");

    if(miArchivo!=NULL)
    {
        fprintf(miArchivo,nombre);
    }
    else
    {
        printf("Error");
    }

    fclose(miArchivo);
    */
    return 0;
}
