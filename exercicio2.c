#include <stdio.h>

struct Assalariado {
    char nome[100];
    char sexo;
    float salario;
};

void analisarAssalariados() {
    float salarioMinimo = 1400.00;
    int qtdAssalariados;

    printf("Digite a quantidade de assalariados: ");
    scanf("%d", &qtdAssalariados);

    struct Assalariado assalariados[qtdAssalariados];

    for (int i = 0; i < qtdAssalariados; i++) {
      
        printf("Digite o nome do assalariado: ");
        scanf("%s", assalariados[i].nome);

        printf("Digite o sexo do assalariado (M ou F): ");
        scanf(" %c", &assalariados[i].sexo);
        while (assalariados[i].sexo != 'M' && assalariados[i].sexo != 'F') {
            printf("Sexo inválido. Digite novamente (M ou F): ");
            scanf(" %c", &assalariados[i].sexo);
        }

        printf("Digite o salario do assalariado: ");
        scanf("%f", &assalariados[i].salario);
        while (assalariados[i].salario <= 1.00) {
            printf("O salario deve ser maior que 1 real. Digite novamente: ");
            scanf("%f", &assalariados[i].salario);
        }
    }

    for (int i = 0; i < qtdAssalariados; i++) {
       
        char classificacao[30];
        if (assalariados[i].salario > salarioMinimo) {
            strcpy(classificacao, "Acima do salario minimo");
        } else {
            strcpy(classificacao, "Abaixo do salario minimo");
        }

        printf("Nome: %s\n", assalariados[i].nome);
        printf("Salario: %.2f reais\n", assalariados[i].salario);
        printf("Classificacao em relacao ao salario minimo: %s\n", classificacao);
        printf("Sexo: %c\n", assalariados[i].sexo);
        printf("\n");
    }
}

int main() {
    analisarAssalariados();
    return 0;
}
