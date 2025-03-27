#include <stdio.h>

int main() {
    char Estado1[50], Estado2[50];
    char Codigo1[50], Codigo2[50];
    char Cidade1[50], Cidade2[50];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Pontos1, Pontos2;
    float Densidade1, Densidade2;
    float Percapita1, Percapita2;
    float SuperPoder1, SuperPoder2;
    int Resultado1, Resultado2, Resultado3, Resultado4, Resultado5, Resultado6, Resultado7;

    
    //Cadastrando a primeira carta do jogo
    printf("Carta 1 \n");

    printf("Insira o nome do estado: \n");
    fgets(Estado1, sizeof(Estado1), stdin);  

    printf("Insira o código da carta: \n");
    fgets(Codigo1, sizeof(Codigo1), stdin);
    //Cada Estado vai ter  4 cidades, a letra vai identificar o estado e o numero a cidade, Ex: A01, A02, B01 e B02
    printf("Insira o nome da cidade: \n");
    fgets(Cidade1, sizeof(Cidade1), stdin);

    printf("Insira a população desta cidade: \n");
    scanf("%d", &Populacao1);

    printf("Insira a área da cidade em KM²: \n");
    scanf("%f", &Area1);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Insira os pontos turísticos da cidade: \n");
    scanf("%d", &Pontos1);
    //Calculando a Densidade Populacional
    Densidade1 = Populacao1 / Area1;
    //Calculante PIB Per Capita
    Percapita1 = PIB1 / Populacao1;
    //Calculando Super Poder
    SuperPoder1 = Populacao1 + Area1 + PIB1 + Pontos1 + (1 / Densidade1) + Percapita1;
    getchar();

    //Cadastrando a segunda carta do jogo.
    printf("Carta 2 \n");
    printf("Insira o nome do estado: \n");
    fgets(Estado2, sizeof(Estado2), stdin);

    printf("Insira o código da carta: \n");
    fgets(Codigo2, sizeof(Codigo2), stdin);

    printf("Insira o nome da cidade: \n");
    fgets(Cidade2, sizeof(Cidade2), stdin);

    printf("Insira a população desta cidade: \n");
    scanf("%d", &Populacao2);

    printf("Insira a área da cidade em KM²: \n");
    scanf("%f", &Area2);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Insira os pontos turísticos da cidade: \n");
    scanf("%d", &Pontos2);
     //Calculando a Densidade Populacional
     Densidade2 = Populacao2 / Area2;
     //Calculante PIB Per Capita
     Percapita2 = PIB2 / Populacao2;
      //Calculando Super Poder
    SuperPoder2 = Populacao2 + Area2 + PIB2 + Pontos2 + (1 / Densidade2) + Percapita2;
    getchar();




    printf("Dados da Carta 1 \n");
    printf("Nome do estado: %s", Estado1);
    printf("Código da carta: %s", Codigo1);
    printf("Nome da cidade: %s", Cidade1);
    printf("População da cidade: %d\n", Populacao1);
    printf("Área em KM² da cidade: %.1f\n", Area1);
    printf("PIB da cidade: %.2f\n", PIB1);
    printf("Numero de pontos turísticos: %d\n", Pontos1);
    printf("A Densidade populacional é: %.2f\n", Densidade1);
    printf("Riqueza média por pessoa na cidade (PIB per capita): %.2f\n", Percapita1);
    printf("Super Poder: %f\n", SuperPoder1);

    printf("Dados da Carta 2 \n");
    printf("Nome do estado: %s", Estado2);
    printf("Código da carta: %s", Codigo2);
    printf("Nome da cidade: %s", Cidade2);
    printf("População da cidade: %d\n", Populacao2);
    printf("Área em KM² da cidade: %.1f\n", Area2);
    printf("PIB da cidade: %.2f\n", PIB2);
    printf("Numero de pontos turísticos: %d\n", Pontos2);
    printf("A Densidade populacional é: %.2f\n", Densidade2);
    printf("Riqueza média por pessoa na cidade (PIB per capita): %.2f\n", Percapita2);
    printf("Super Poder: %f\n", SuperPoder2);

    //Operação de comparação dos dados das duas cartas cadastradas
    Resultado1 = Populacao1 > Populacao2;
    Resultado2 = Area1 > Area2;
    Resultado3 = PIB1 > PIB2;
    Resultado4 = Pontos1 > Pontos2;
    Resultado5 = Densidade1 < Densidade2;
    Resultado6 = Percapita1 > Percapita2;
    Resultado7 = SuperPoder1 > SuperPoder2;

    printf("**Comparações das cartas e vencedores da rodada**\n");
    printf("Se o resultado for 1 (Carta 1 venceu) e se for 0 (Carta 2 Venceu)\n");
    printf("População: %d\n", Resultado1);
    printf("Área: %d\n", Resultado2);
    printf("PIB: %d\n", Resultado3);
    printf("Pontos Turísticos: %d\n", Resultado4);
    printf("Densidade Populacional: %d\n", Resultado5);
    printf("PIB per Capita: %d\n", Resultado6);
    printf("Super Poder: %d\n", Resultado7);

    return 0;
}
