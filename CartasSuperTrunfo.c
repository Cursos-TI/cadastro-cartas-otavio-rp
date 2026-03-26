#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {/* aqui é onde o código começa a ser executado, escreva seu código dentro desta função */

    // Área para definição das variáveis para armazenar as propriedades das cidades
        char Estado01 [50]; /* aqui você pode declarar as variáveis que quiser, use o tipo de dado adequado para cada uma delas */

        char Código01 [5]; /* lembre-se de escolher nomes significativos para as variáveis, isso ajuda a entender o código */

        char Cidade01 [20];

        int População, Números; /* use o tipo de dado correto para cada variável, por exemplo, para números inteiros use 'int' e para números decimais use 'float' ou 'double' */

        float Área; /* para números decimais, use 'float' ou 'double', dependendo da precisão necessária */

        float PIB; 

    // Área para entrada de dados
        printf("Carta01: \n"); /* use a função printf para exibir mensagens para o usuário, isso ajuda a orientar o que deve ser feito */

            printf("Digite o nome do estado: \n"); /* use a função printf para exibir mensagens para o usuário, isso ajuda a orientar o que deve ser feito */
        scanf("%s", &Estado01); /* use a função scanf para ler os dados inseridos pelo usuário, certifique-se de usar o formato correto para cada tipo de dado */

            printf("Digite o código do estado: \n");
        scanf("%s", &Código01);

            printf("Digite o nome da cidade: \n");
        scanf("%s", &Cidade01);

            printf("Digite a população da cidade: \n");
        scanf("%d", &População);

            printf("Digite a área da cidade: \n");
        scanf("%f", &Área);

            printf("Digite o PIB da cidade: \n");
        scanf("%f", &PIB);

            printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &Números);

    // Área para exibição dos dados da cidade
        printf("Carta01: \n"); /* use a função printf para exibir mensagens para o usuário, isso ajuda a orientar o que deve ser feito */

        printf("Estado: %s\n", Estado01); /* use a função printf para exibir os dados inseridos pelo usuário, isso ajuda a verificar se os dados foram lidos corretamente */

        printf("Código: %s\n", Código01); /* use a função printf para exibir os dados inseridos pelo usuário, isso ajuda a verificar se os dados foram lidos corretamente */

        printf("Cidade: %s\n", Cidade01);

        printf("População: %d\n", População); /* use a função printf para exibir os dados inseridos pelo usuário, isso ajuda a verificar se os dados foram lidos corretamente */
        
        printf("Área: %.2f\n", Área); /* use a função printf para exibir os dados inseridos pelo usuário, isso ajuda a verificar se os dados foram lidos corretamente */

        printf("PIB: %.2f\n", PIB); /* use a função printf para exibir os dados inseridos pelo usuário, isso ajuda a verificar se os dados foram lidos corretamente */

        printf("Número de pontos turísticos: %d\n", Números); /* use a função printf para exibir os dados inseridos pelo usuário, isso ajuda a verificar se os dados foram lidos corretamente */

    // Área para entrada de dados da Carta02
            printf("Carta02: \n"); /* use a função printf para exibir mensagens para o usuário, isso ajuda a orientar o que deve ser feito */

            printf("Digite o nome do estado: \n");
        scanf("%s", &Estado01);         

            printf("Digite o código do estado: \n");
        scanf("%s", &Código01);

            printf("Digite o nome da cidade: \n");
        scanf("%s", &Cidade01);

            printf("Digite a população da cidade: \n");
        scanf("%d", &População);

            printf("Digite a área da cidade: \n");
        scanf("%f", &Área);

            printf("Digite o PIB da cidade: \n");
        scanf("%f", &PIB);

            printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &Números);

     // Área para exibição dos dados da cidade
        printf("Carta02: \n"); /* use a função printf para exibir mensagens para o usuário, isso ajuda a orientar o que deve ser feito */

        printf("Estado: %s\n", Estado01); /* use a função printf para exibir os dados inseridos pelo usuário, isso ajuda a verificar se os dados foram lidos corretamente */

        printf("Código: %s\n", Código01); /* use a função printf para exibir os dados inseridos pelo usuário, isso ajuda a verificar se os dados foram lidos corretamente */

        printf("Cidade: %s\n", Cidade01);

        printf("População: %d\n", População); /* use a função printf para exibir os dados inseridos pelo usuário, isso ajuda a verificar se os dados foram lidos corretamente */

        printf("Área: %.2f\n", Área); /* use a função printf para exibir os dados inseridos pelo usuário, isso ajuda a verificar se os dados foram lidos corretamente */

        printf("PIB: %.2f\n", PIB); /* use a função printf para exibir os dados inseridos pelo usuário, isso ajuda a verificar se os dados foram lidos corretamente */

        printf("Número de pontos turísticos: %d\n", Números); /* use a função printf para exibir os dados inseridos pelo usuário, isso ajuda a verificar se os dados foram lidos corretamente */

    return 0; /* esta linha indica que o programa terminou com sucesso */
}