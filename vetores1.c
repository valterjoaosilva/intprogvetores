#include<stdio.h>
int main(){

int vetorm[10], i=0,cont = 0, soma=0;
float media;



while(i<10){
    printf("Digites uma nota");
    scanf("%d", &vetorm[i]);
    i++;
}

i=0;
while(i<10){
    soma = soma + vetorm[i];
    i++;
}
media = soma / 10;
i=0;
while(i < 10){
    if (vetorm[i] > media) {
        cont++;
        
    }
    i++;
    
}

printf("A média é: %.2f\n", media);
printf("O número de notas acima da media são: %d\n", cont);








    return 0;
}