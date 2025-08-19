#include <stdio.h>

int main(){
    char nome[20];
    int idade;
    float altura;
    int matricula;

    printf("Bem-vindo ao cadastro de alunos\n");
    
    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Seu nome é: %s\n" , nome);
    printf("Sua idade é: %d\n" , idade);
    printf("Sua altura é: %.2f\n" , altura);
    printf("Sua matricula é: %d\n" , matricula);

    printf("Boa sarte!\n");

}