// Fermin Lucero - SSL K2002 
#include <stdio.h>
#include <ctype.h>

int main(){

char caracter;

printf("Ingrese caracteres: ");

caracter = getchar();

while(caracter != EOF){
    int entro=0;

        if(isupper(caracter) && entro==0 ){
            entro = 1;
            caracter = tolower(caracter);
            putchar(caracter);

            }

        if(islower(caracter) && entro==0){
            entro = 1;
            caracter = toupper(caracter);
            putchar(caracter);

            }

        if( !(isdigit(caracter)) && entro==0){

        putchar(caracter);

        }

caracter = getchar();

}

printf("\n \n");


    return 0;
}