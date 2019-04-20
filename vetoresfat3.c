#include<stdio.h>
int main(){

int vetorA[5], vetorB[5], i=0, cont=1;

while(i < 5){
printf("Digite um número\n");
scanf("%d", &vetorA[i]);
 
 vetorB[i]=1;
 cont =1;

    while(cont <= vetorA[i]){
        vetorB[i] = vetorB[i] * cont;
        cont++;
    }
    i++;
    
}

i=0;
    while(i < 5){
        printf("%d,\n", vetorB[i]);
        i++;
    }



    return 0;
}