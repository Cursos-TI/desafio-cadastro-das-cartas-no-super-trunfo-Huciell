#include <stdio.h>

int main() {
    //CARTA1
    char Estado1;//Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char Codigo1[10];//codigo de carta
    char Nome1[50];//O nome da cidade. Tipo: char[]
    unsigned long int  Populacao1;//O número de habitantes da cidade. Tipo: unsigned long int para suportar grandes numeros
    float AreaKm1;//A área da cidade em quilômetros quadrados. Tipo: float
    float PIB1;// O Produto Interno Bruto da cidade. Tipo: float
    int Pontos1;//pontos turisticos 

    //variaveis calculo estado 1
    float Densidade1, Pibpercapita1, Superpoder1;

    //CARTA2
    char Estado2;
    char Codigo2[10];
    char Nome2[50];
    unsigned long int Populacao2;
    float Areakm2;
    float PIB2;
    int Pontos2;
    
    //variaveis de calculo para o estado 2
    float Densindade2, Pibpercapita2,Superpoder2; 
    
    //====entradas para a carta 1====
    printf("Digite o Estado da carta 1:\n");
    scanf ("%s", &Estado1);

    printf("Digite o código da carta 1:\n");
    scanf ("%s", Codigo1);

    printf("Digite o nome da cidade da carta 1:\n");
    scanf ("%s", Nome1);

    printf("Digite a população da carta 1:\n");
    scanf ("%lu", &Populacao1);

    printf("Digite a Área (em km²) da carta 1:\n");
    scanf(" %f", &AreaKm1);

    printf("Digite o PIB da carta 1:\n");
    scanf ("%f", &PIB1);
    
    printf("Digite o número de pontos turísticos da cartas 1:\n");
    scanf ("%d", &Pontos1);

    //====entradas para a carta 2====
    printf("Digite o Estado da carta 2:\n");
    scanf("%s",&Estado2);

    printf("Digite o código da carta 2:\n");
    scanf("%s",Codigo2);

    printf("Digite o nome da cidade da carta2\n");
    scanf ("%s", Nome2);

    printf("Digite a população da carta 2:\n");
    scanf ("%lu", &Populacao2);

    printf("Digite a Área (em km²) da carta 2:\n");
    scanf(" %f", &Areakm2);

    printf("Digite o PIB da carta 2:\n");
    scanf ("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cartas 2:\n");
    scanf ("%d", &Pontos2);

    //calculos para a carta 1
    Densidade1 = Populacao1 / AreaKm1;
    Pibpercapita1 = PIB1 / Populacao1;
    Superpoder1 = Populacao1 + AreaKm1 + PIB1 + Pontos1 + Pibpercapita1 + (1/Densidade1);

    //Calculos para carta 2
    Densindade2 = Populacao2/ Areakm2;
    Pibpercapita2 = PIB2 / Populacao2 ;
    Superpoder2 = Populacao2 + Areakm2 + PIB2 + Pontos2 + Pibpercapita2 + (1/Densindade2);

 //Resultado carta 01
    printf ("Carta 01 \n");
    printf ("Estado: %c\n", Estado1);
    printf ("código: %s\n", Codigo1);
    printf ("cidade: %s\n", Nome1);
    printf ("População: %lu\n", Populacao1);
    printf ("Área: %.2f Km2\n", AreaKm1);
    printf ("PIB: %.2f bilhões de reais\n", PIB1);
    printf ("Numero de Pontos Turisticos: %d\n", Pontos1);
    printf ("Densidade Populacional: %.2f hab/km2\n", Densidade1);
    printf ("PIBPERCAPITA: %.2F reais\n",Pibpercapita1);
    printf ("Superpoder: %f\n",Superpoder1);


     //Resultado carta 02
    printf ("Carta 02 \n");
    printf ("Estado: %c\n", Estado2);
    printf ("código: %s\n", Codigo2);
    printf ("cidade: %s\n", Nome2);
    printf ("População: %lu\n", Populacao2);
    printf ("Área: %.2f Km2\n", Areakm2);
    printf ("PIB: %.2f bilhões de reais\n", PIB2);
    printf ("Numero de Pontos Turisticos: %d\n", Pontos2);
    printf ("Densidade Populacional: %.2f hab/km2\n", Densindade2);
    printf ("PIBPERCAPITA: %.2F reais\n",Pibpercapita2);
    printf ("Superpoder: %f\n",Superpoder2);

    //=====Comparações=====
    printf("\n Comparação de Cartas(1 para verdadeiro: Carta 1 vence e 0 para falso Carta 2 vence):\n");

    printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);

    printf("Área: Carta 1 venceu(%d)\n", AreaKm1 > Areakm2);

    printf("PIB:Carta 1 venceu (%d)\n",PIB1 > PIB2);

    printf("Pontos turísticos: Carta 1 venceu (%d)\n", Pontos1 > Pontos2 );

    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade1 < Densindade2);

    printf("Pib per Capital: Carta 1 venceu (%d)\n",Pibpercapita1 > Pibpercapita2 );

    printf("Super Poder: Carta 1 venceu (%d)\n",Superpoder1 > Superpoder2);

    return 0;
}