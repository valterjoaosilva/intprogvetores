#include<stdio.h>
int main(){
int vetorm[50], par = 0, impar = 0, i =0;

do
{
    printf("Digite um numero");
    scanf("%d", &vetorm[i]);
    

    if (vetorm[i] % 2 == 0 ) {
        par++;
    }else{
        impar++;
    }
    
i++;
} while (i < 50);
printf("As quantidades de números pares são: %d\n", par);
printf("As quantidade de números impares são: %d\n", impar);

return 0;

}



