       #include <stdio.h>

       // Desafio Super Trunfo - Países (Nível Novato)
       // Tema 1 - Cadastro das Cartas
       // Por : Luan

       int main() {

       // Declaração de variáveis para a Carta 01
       char estado01, codigo01[5], cidade01[50];
       int populacao01, pontos_turisticos01;
       float area01, pib01, densidade_populacional01, pib_per_capita01;

        // Declaração de variáveis para a Carta 02
       char estado02, codigo02[5], cidade02[50];
       int populacao02, pontos_turisticos02;
       float area02, pib02, densidade_populacional02, pib_per_capita02;
       
       // Entrada dos dados da Carta 01
       printf("Carta 01\n");

       printf("Digite uma letra de A a H: ");
       scanf(" %c", &estado01);

       printf("Digite o código da carta. (Repita a letra digitada anteriormente seguida de um valor entre 01 a 04 - Ex: C03): ");
       scanf("%s", codigo01);

       printf("Digite o nome da cidade: ");
       scanf(" %[^\n]", cidade01);

       printf("Digite a população da cidade: ");
       scanf("%d", &populacao01);

       printf("Digite a área em km² da cidade: ");
       scanf("%f", &area01);

       printf("Digite o PIB dessa cidade (em bilhões de reais): ");
       scanf("%f", &pib01);

       printf("Digite a quantidade de pontos turísticos nessa cidade: ");
       scanf("%d", &pontos_turisticos01);

       // Entrada dos dados da Carta 02
       printf("\nCarta 02\n");

       printf("Digite uma letra de A a H: ");
       scanf(" %c", &estado02);

       printf("Digite o código da carta. (Repita a letra digitada anteriormente seguida de um valor entre 01 a 04 - Ex: C03): ");
       scanf("%s", codigo02);

       printf("Digite o nome da cidade: ");
       scanf(" %[^\n]", cidade02);  // Permite espaços no nome da cidade

       printf("Digite a população da cidade: ");
       scanf("%d", &populacao02);

       printf("Digite a área em km² da cidade: ");
       scanf("%f", &area02);

       printf("Digite o PIB dessa cidade (em bilhões de reais): ");
       scanf("%f", &pib02);

       printf("Digite a quantidade de pontos turísticos nessa cidade: ");
       scanf("%d", &pontos_turisticos02);

       // Calcular densidade populacional
       densidade_populacional01 = populacao01 / area01;
       densidade_populacional02 = populacao02 / area02;

       // Calcular PIB per capita - com conversão para R$
       pib_per_capita01 = (pib01 * 1000000000) / populacao01;
       pib_per_capita02 = (pib02 * 1000000000) / populacao02;

       // Exibição dos dados cadastrados
       printf("\nInformações Cadastradas:\n");

       printf("\nCarta 01\n");
       printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: R$ %.2f\n",
              estado01, codigo01, cidade01, populacao01, area01, pib01, pontos_turisticos01, densidade_populacional01, pib_per_capita01);

       printf("\nCarta 02\n");
       printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: R$ %.2f\n",
              estado02, codigo02, cidade02, populacao02, area02, pib02, pontos_turisticos02, densidade_populacional02, pib_per_capita02);

       // Comparação de atributo: Densidade Populacional
       printf("\nComparação de Cartas (Atributo: Densidade Populacional)\n");

       printf("Carta 1 - %s: %.2f hab/km²\n", cidade01, densidade_populacional01);
       printf("Carta 2 - %s: %.2f hab/km²\n", cidade02, densidade_populacional02);

       // Lógica de Comparação da Densidade
       if (densidade_populacional01 < densidade_populacional02) {
              printf("Resultado: Carta 1 (%s) venceu!\n", cidade01);

       } else if (densidade_populacional02 < densidade_populacional01) {
              printf("Resultado: Carta 2 (%s) venceu!\n", cidade02);

       } else {
              printf("Resultado: Empate!\n");

       return 0;

       
       }
}
