#include <stdio.h>

int main() {
    char Estado1[50], Estado2[50];
    char Codigo1[50], Codigo2[50];
    char Cidade1[50], Cidade2[50];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int Pontos1, Pontos2;
    
    //cadastrando a primeira carta do jogo
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
    getchar();



    
    printf("Dados da Carta 1 \n");
    printf("Nome do estado: %s", Estado1);
    printf("Código da carta: %s", Codigo1);
    printf("Nome da cidade: %s", Cidade1);
    printf("População da cidade: %d\n", Populacao1);
    printf("Área em KM² da cidade: %d\n", Area1);
    printf("PIB da cidade: %f\n", PIB1);
    printf("Numero de pontos turísticos: %d\n", Pontos1);
    
    printf("Dados da Carta 2 \n");
    printf("Nome do estado: %s", Estado2);
    printf("Código da carta: %s", Codigo2);
    printf("Nome da cidade: %s", Cidade2);
    printf("População da cidade: %d\n", Populacao2);
    printf("Área em KM² da cidade: %d\n", Area2);
    printf("PIB da cidade: %f\n", PIB2);
    printf("Numero de pontos turísticos: %d\n", Pontos2);

    

    return 0;
}
