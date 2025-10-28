#include <stdio.h>

int main() {
    
    char nome[6];
    int idade;
    float altura;
    
    printf(" Digite seu Nome, ");
    scanf(" %s " , nome);
    printf("Digite sua Idade e ");
    scanf(" %i " , &idade);
    printf("Digite sua Altura ");
    scanf(" %f " , &altura);
    
    printf("\nNome: %s\nIdade: %d\nAltura: %.2f\n", nome, idade, altura);
    return 0;

    
}




