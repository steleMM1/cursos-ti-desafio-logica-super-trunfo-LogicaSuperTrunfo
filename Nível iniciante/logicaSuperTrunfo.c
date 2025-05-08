#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  //Variáveis carta N°1:
  char estado1[30];
  char nome1[30];
  unsigned long int populacao1;
  float area1;
  float PIB1;
  int qntpontosturisticos1;
  float densidade1;
  float pibcpt1;
  float poder1;


  //Variáveis carta N°2:
  char estado2[30];
  char nome2[30];
  unsigned long int populacao2;
  float area2;
  float PIB2;
  int qntpontosturisticos2;
  float densidade2;
  float pibcpt2;
  float poder2;


  // Cadastro das Cartas:
  // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
  // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


  //Aquisição de dados da carta N°1: 

  printf("Digite os dados da carta 1:");
  printf("\n");
  printf("\n");

  printf("Digite o nome do estado que a cidade se encontra:");
  scanf("%s", estado1);

  printf("Digite o nome da cidade:");
  scanf("%s", nome1);

  printf("Digite a população da cidade:");
  scanf ("%lu", &populacao1);   

  printf("Digite a área da cidade:");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade:");
  scanf("%f", &PIB1);

  printf("Digite a quantidade de pontos turísitcos da cidade:");
  scanf("%i", &qntpontosturisticos1);

  //Cálculo das variáveis da carta N°1:
  densidade1 = (float) populacao1 / area1;
  pibcpt1 = (float) PIB1 / populacao1;
  poder1 = (float) ((populacao1 + area1 + PIB1 + qntpontosturisticos1 + pibcpt1 ) - densidade1);

  printf("\n");
  printf("\n");
  printf("\n");

  //Aquisição de dados da carta N°2: 

  printf("Digite os dados da carta 2:");
  printf("\n");
  printf("\n");


  printf("Digite o nome do estado que a cidade se encontra:");
  scanf("%s", estado2);

  printf("Digite o nome da cidade:");
  scanf("%s", nome2);

  printf("Digite a população da cidade:");
  scanf ("%lu", &populacao2);   

  printf("Digite a área da cidade:");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade:");
  scanf("%f", &PIB2);

  printf("Digite a quantidade de pontos turísitcos da cidade:");
  scanf("%i", &qntpontosturisticos2);

  //Cálculo das variáveis da carta N°2:
  densidade2 = (float) populacao2 / area2;
  pibcpt2 = (float) PIB2 / populacao2;
  poder2 = (float) ((populacao2 + area2 + PIB2 + qntpontosturisticos2 + pibcpt2 ) - densidade2);

  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");


  // Exibição dos Dados das Cartas:
  // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
  // Exiba os valores inseridos para cada atributo da cidade, um por linha.

  //Carta N°1:
  printf("Dados da carta 1:");
  printf("\n");
  
  printf("Estado: %s \n", estado1);
  printf("Código: A01\n");
  printf("Nome: %s \n", nome1);
  printf("População: %lu habitantes\n", populacao1);
  printf("Área: %f km²\n", area1);
  printf("PIB: %f bilhões de reais\n", PIB1);
  printf("Quantidade de pontos turísticos: %i \n", qntpontosturisticos1);
  printf("Densidade populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capta: %.2f reais\n", pibcpt1);

  printf("\n");

  
  //Carta N°2:
  printf("Dados da carta 2:");
  printf("\n");
  
  printf("Estado: %s \n", estado2);
  printf("Código: B02\n");
  printf("Nome: %s \n", nome2);
  printf("População: %lu habitantes\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", PIB2);
  printf("Quantidade de pontos turísticos: %i \n", qntpontosturisticos2);
  printf("Densidade populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capta: %.2f reais\n", pibcpt2);

  printf("\n");
  printf("\n");
  printf("\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


    if (pibcpt1 > pibcpt2) {
    
    printf("A cidade 1 tem o PIB per Capta maior que a cidade 2\n");
    printf("A cidade vencedora é: %s\n!", nome1);

}   else {

    printf("A cidade 2 tem o PIB per Capta maior que a cidade 1\n");
    printf("A cidade vencedora é: %s\n!", nome2);


}


    return 0;
}
