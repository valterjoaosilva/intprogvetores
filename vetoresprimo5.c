#include<stdio.h>
int main(){

int vet[5], i, num, pos;

i=0;
while(i<5){
    printf("digite o numero");
    scanf("%d", &vet[i]);
    i++;
}
scanf("%d", &num);

i=0;

while(i < 5){
    if(vet[i]==num){
        pos =i;
    }
    i++;
}
if (pos != -1) {
    printf("Encontrado a posição %d", pos);

}else
{
    printf("Não encontrado");
}







    return 0;
}