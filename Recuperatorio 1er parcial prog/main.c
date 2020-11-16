#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;

void actualizarMuertos(ePais pais, int muertosHoy);
void quitarVocales(char cad[]);
void ordenarCaracteres(char cad[], int tam);


int main()
{
    ePais argentina;
    int muertosHoy=500;
    char cadena[]="democracia";
    char cadena2[] = "algoritmo";

    argentina.muertos=50;

    actualizarMuertos(argentina, muertosHoy);
    printf("%d\n\n", argentina.muertos);
    quitarVocales(cadena);
    puts(cadena);
    ordenarCaracteres(cadena2, 10);
    printf("\n\n");
    puts(cadena2);
    return 0;
}

void actualizarMuertos(ePais pais, int muertosHoy)
{
    (pais.muertos)=(pais.muertos)+muertosHoy;
}

void quitarVocales(char cad[])
{
    for(int i=0;cad[i]!='\0';i++)
    {
        if(cad[i]=='a' || cad[i]=='e' || cad[i]=='i' || cad[i]=='o' || cad[i]=='u')
        {
            for(int j=i;cad[j]!='\0';j++)
            {
                cad[j]=cad[j+1];
            }
        }
    }
}

void ordenarCaracteres(char cad[], int tam)
{
    char aux;
    for(int i=0;i<tam-i;i++)
    {
        for(int j=i+i;j<tam;j++)
        {
            if((strcmp(cad[i], cad[j]))<0)
            {
                aux=cad[i];
                cad[i]=cad[j];
                cad[j]=aux;
            }
        }
    }
}
