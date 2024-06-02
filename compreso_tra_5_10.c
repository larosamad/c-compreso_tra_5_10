// Dati in input due numeri scrivere un programma per verificare che almeno 
// uno dei due sia compreso tra 5 e 10
#include <stdio.h>

int main (void){
    int a, b;

    printf("Inserisci un numero ");
    scanf("%d", &a);
    
    printf("Inserisci un numero ");
    scanf("%d", &b);

    if ((((a>=5) && (a<=10))) || (((b>=5) && (b<=10))))
        printf("Uno dei numeri è compreso tra 5 e 10");
    else 
        printf("Nessuno dei numeri è compreso tra 5 e 10"); 

    return 0;
}

/* 
    versione basic
    
        if ((a>=5) && (a<=10))
        printf("Uno dei numeri è compreso tra 5 e 10");
    else if ((b>=5) && (b<=10))
        printf("Uno dei numeri è compreso tra 5 e 10");
    else 
        printf("Nessuno dei numeri è compreso tra 5 e 10");
*/


