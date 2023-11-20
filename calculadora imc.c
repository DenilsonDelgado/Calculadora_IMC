#include <stdio.h>
#include <unistd.h>


int main() {
    char nome[100];
    float peso, altura, imc;
    printf("Informação do Aluno:\n");
    printf("\n");
    printf("Nome do Programa: Calculadora de IMC - Indice de Massa Corporal\n");
    printf("Data de Criação: [28/10/2023]\n");
    printf("Autor: [Denison Delgado]\n");
    printf("Curso: [Analise e desenvolvimento de sistemas]\n");
    printf("Disciplina: [[TADS030/ADS1T] CODING: ALGORITMO E ESTRUTURA DE DADOS]\n");
    printf("Descrição: Este programa calcula o Indice de Massa Corporal (IMC) de um paciente, classifica o resultado e exibe as informações em um formato fácil de entender.");
    printf("O IMC é uma medida comum utilizada para avaliar se uma pessoa está acima do peso, com peso saudável ou abaixo do peso.\n");
    printf("\n");
    sleep(1);

    while (1) {

        printf("1. Digite o nome do paciente (ou aperte '0' para encerrar): ");
        scanf("%s", nome);
        printf("\n");
        sleep(1);

        if (strcmp(nome, "0") == 0) {
            break;
        }


        printf("2. Digite o peso do paciente em quilogramas (kg): ");
        scanf("%f", &peso);
        printf("\n");
        sleep(1);
        printf("3. Digite a altura do paciente em metros (m): ");
        scanf("%f", &altura);
        printf("\n");
        sleep(2);

        if (peso <= 0 || altura <= 0) {
            printf("Valores inválidos. Peso e altura devem ser maiores que zero.\n");
            continue;
        }


        imc = peso / (altura * altura);


        printf("---------------------------------");
        printf("\nInformações do paciente:\n");
        printf("Nome: %s\n", nome);
        printf("Peso: %.2f kg\n", peso);
        printf("Altura: %.2f m\n", altura);
        printf("IMC: %.2f\n",imc);
        printf("-------------------------------------------------------\n");


        printf("Classificação do IMC: ");

        if (imc < 18.5) {
            printf("|Abaixo do peso|\n");
        } else if (imc < 24.9) {
            printf("|Peso saudável|\n");
        } else if (imc < 29.9) {
            printf("|Sobrepeso|\n");
        } else if (imc < 34.9) {
            printf("|Obesidade Grau I, ATENÇÃO!|\n");
        } else if (imc < 39.9) {
            printf("|Obesidade Grau II, CUIDADO!|\n");
        } else {
            printf("|Obesidade Grau III, SE CUIDE!|\n");
        }
        printf("------------------------------------------------------\n");
        printf("\n");
    }

    printf("Programa encerrado.\n");

    return 0;
}