//Criando as Cartas do Super Trunfo com PIB per capta e densidade populacional 

#include <stdio.h> //inclui a biblioteca padrão do C

int main(){ //Declara a função principal 

    // Variáveis da carta1
    char Carta1[50] = "Carta1:", Codigo1[50], Estado1[50], Cidade1[50];
    int Populacao1, Pontos_Turisticos1;
    float Area1, PIB1;
    
   // Variáveis da carta2
    char Carta2[50] = "Carta2:", Codigo2[50], Estado2[50], Cidade2[50];
    int Populacao2, Pontos_Turisticos2;
    float Area2, PIB2;
   
printf("Criando as Cartas do Super Trunfo\n");
printf("%s\n", Carta1);
printf("Digite o Codigo da Carta: ");
scanf("%s", Codigo1);
printf("Digite a sigla do Estado: ");
scanf("%s", Estado1);
printf("Insira o Nome da Cidade (sem espacos e sem acentos): ");
scanf("%s", Cidade1);
printf("Quantidade de habitantes: ");
scanf("%d", &Populacao1);
printf("Digite a área da Cidade em km2: ");
scanf("%f", &Area1);
printf("Digite o PIB anual da cidade: ");
scanf("%f", &PIB1);
printf("Quantidade de Pontos Turisticos: ");
scanf("%d", &Pontos_Turisticos1);

    float Densidade1 = (float) Populacao1/Area1;
    float PIB_Percapta1 = (float) PIB1/Populacao1;

    printf("%s\n", Carta1);
    printf("Codigo: %s\n", Codigo1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km2\n", Area1);
    printf("Densidade Populacional: %.2f\n", Densidade1);
    printf("PIB: %.2f\n", PIB1);
    printf("PIB Percapta: %.2f\n", PIB_Percapta1);
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

    float Densidade2 = (float) Populacao2/Area2;
    float PIB_Percapta2 = (float) PIB2/Populacao2;

    printf("%s\n", Carta2);
    printf("Codigo: %s\n", Codigo2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km2\n", Area2);
    printf("Densidade Populacional: %.2f\n", Densidade2);
    printf("PIB: %.2f\n", PIB2);
    printf("PIB Percapta: %.2f\n", PIB_Percapta2);
    printf("Pontos Turisticos: %d\n", Pontos_Turisticos2);
    printf("Carta2 cadastrada com sucesso\n");
    printf("Todas as cartas foram cadastradas com sucesso\n");
    getchar(); //Impede o fechamento automático da janela no prompt cmd
    printf("Pressione Enter para sair...\n");//Solicita ao usuário que pressione a tecla enter para fechar a aplicação
    getchar(); //Impede o fechamento automático da janela no prompt cmd

    return 0; //Fim da função principal.

}