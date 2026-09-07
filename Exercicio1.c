#include <stdio.h>

int main()
{
    float n1; // determina variavel 1
    float n2; // determina variavel 2
    float soma; // determina variavel soma 
    
    printf("Escreva um numero: "); //essas duas linhas pedem para o usuario um 
    scanf("%f", &n1);// valor e armazenam ele 
    printf("Escreva outro numero: ");// a mesma coisa acontece aqui para o outro
    scanf("%f", &n2); 
    
    soma = n1 + n2; // soma os dois valores 
    
    printf("Soma: %.2f\n", soma); // mostra o valor da soma arredondado a 2 casas decimais
    
    /*aqui acontece a condicional de que podera mudar se o valor foi maior,
    menor ou igual a 20 e mostra esse valor */
    if (soma > 20){
        printf("Soma maior que 20");
    } else if (soma < 20){
        printf("Soma menor que 20");
    } else {
        printf("Soma igual a 20");
    }
    
    return 0;
}