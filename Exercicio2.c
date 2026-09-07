#include <stdio.h>

int main()
{
    float n1; // determina variavel 1
    float n2; // determina variavel 2
    float media; //determina variavel media
    
    printf("Qual foi sua primeira nota? ");
    scanf("%f", &n1);
    printf("Qual foi sua segunda nota? ");
    scanf("%f", &n2);
    
    media = (n1+n2)/2.0f;
    
    printf("Sua media foi: %.2f\n", media);
    
    if (media >= 7.0f){
        printf("Aprovado!");
    } else {
        printf("Reprovado");
    }
    
    return 0;
}