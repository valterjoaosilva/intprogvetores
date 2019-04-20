#include<stdio.h>
int main(){

int vetorA[5], vetorB[5], i=0, fatorial = 1, cont=1, num;



while(i < 5){
printf("Digite um número\n");
scanf("%d", &vetorA[i]);
 fatorial=1;
 cont=1;
 
i =0;
    while(cont <= vetorA[i]){
    fatorial = fatorial * cont;
    cont++;
    }
    vetorB[i] = fatorial;
    i++;
    }

    i=0;
    while(i < 5){
        printf("%d", vetorB[i]);
        i++;
    }
    
    return 0;
}