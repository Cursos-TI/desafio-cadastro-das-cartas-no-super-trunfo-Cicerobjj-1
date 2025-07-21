//Criando as Cartas do Super Trunfo

#include <stdio.h> //inclui a biblioteca padrão do C

int main(){ //Declara a função principal 

    // Variáveis da carta1
    char Carta1[50] = "Carta1";
    char Codigo1[50];
    char Estado1[50];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos_Turisticos1;

    // Variáveis da carta2
    char Carta2[50] = "Carta 2";
    char Codigo2[50];
    char Estado2[50];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_Turisticos2;

printf("Criando as Cartas do Super Trunfo\n");
printf("%s\n", Carta1);
printf("Codigo: ");
scanf("%s", Codigo1);
printf("Estado: ");
scanf("%s", Estado1);
printf("Cidade: ");
scanf("%s", Cidade1);
printf("Populacao: ");
scanf("%d", &Populacao1);
printf("Area em km2: ");
scanf("%f", &Area1);
printf("PIB: ");
scanf("%f", &PIB1);
printf("Quantidade de Pontos Turisticos: ");
scanf("%d", &Pontos_Turisticos1);

    printf("%s\n", Carta1);
    printf("Codigo: %s\n", Codigo1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km2\n", Area1);
    printf("PIB: %.2f bilhoes de  reais/ano\n", PIB1);
    printf("Pontos Turisticos: %d\n", Pontos_Turisticos1);
    printf("Carta1 cadastrada com sucesso\n\n");

printf("%s\n", Carta2);
printf("Codigo: ");
scanf("%s", Codigo2);
printf("Estado: ");
scanf("%s", Estado2);
printf("Cidade: ");
scanf("%s", Cidade2);
printf("Populacao: ");
scanf("%d", &Populacao2);
printf("Area em km2: ");
scanf("%f", &Area2);
printf("PIB: ");
scanf("%f", &PIB2);
printf("Quantidade de Pontos Turisticos: ");
scanf("%d", &Pontos_Turisticos2);

    printf("%s\n", Carta2);
    printf("Codigo: %s\n", Codigo2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km2\n", Area2);
    printf("PIB: %.2f bilhoes de  reais/ano\n", PIB2);
    printf("Pontos Turisticos: %d\n", Pontos_Turisticos2);
    printf("Carta2 cadastrada com sucesso\n");
    printf("Todas as cartas foram cadastradas com sucesso\n");
    getchar(); //Impede o fechamento automático da janela no prompt cmd
    printf("Pressione Enter para sair...\n");//Solicita ao usuário que pressione a tecla enter para fechar a aplicação
    getchar(); //Impede o fechamento automático da janela no prompt cmd

    return 0; //Fim da função principal

}