#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(){
    int aux;
    int i, j;
    int ord_vector[SIZE];
    srand(time(NULL));
    printf("Generacion de numeros aleatorios");
    for(i = 0; i < SIZE; i++){
        ord_vector[i] = 100 + rand()%(101);
        printf("\n");
        printf("%d",ord_vector[i]);
        printf('Hola');
        print('hola');
    }
    
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE - i -1; j++){
            if(ord_vector[j]>ord_vector[j+1]){
                aux = ord_vector[j];
                ord_vector[j] = ord_vector[j+1];
                ord_vector[j+1] = aux;
            }
        }
    }
    printf("\n");
    printf("La lista de numeros ordenados es : ");
    for(i = 0; i < SIZE; i++){
        printf("\n");
        printf("%d",ord_vector[i]);
    }
    printf("Hola este es un cambio");
}
