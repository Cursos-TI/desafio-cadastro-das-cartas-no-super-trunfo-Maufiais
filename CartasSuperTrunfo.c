#include <stdio.h>

int main(){    
    char Estado1[5], CodCidade1[5], NomeCidade1[50], Estado2[5], CodCidade2[5], NomeCidade2[50];
    int Populacao1,PontosTuristicos1,Populacao2,PontosTuristicos2;
    float PIB1,PIB2,Area1,Area2;
        
    printf ("Super Trunfo Países, vamos iniciar com as informações da primeira cidade: \n");
    printf ("Digite o letra do 1o estado: \n");
    scanf("%s", &Estado1);

    printf ("Digite o código da 1a cidade: \n");
    scanf("%s", &CodCidade1);

    printf ("Digite o nome da 1a cidade: \n");
    scanf("%s", &NomeCidade1);

    printf ("Digite a população da 1a cidade: \n");
    scanf("%d", &Populacao1);

    printf ("Digite a Área da 1a cidade: \n");
    scanf("%f", &Area1);

    printf ("Digite o Pib da 1a cidade: \n");
    scanf("%f", &PIB1);

    printf ("Digite a quantidade de pontos turísticos da 1a cidade: \n");
    scanf("%d", &PontosTuristicos1);

    printf ("Agora vamos digitar as informações da segunda cidade: \n");
    printf ("Digite o letra do 2o estado: \n");
    scanf("%s", &Estado2);

    printf ("Digite o código da 2a cidade: \n");
    scanf("%s", &CodCidade2);

    printf ("Digite o nome da 2a cidade: \n");
    scanf("%s", &NomeCidade2);

    printf ("Digite a população da 2a cidade: \n");
    scanf("%d", &Populacao2);

    printf ("Digite a Área da 2a cidade: \n");
    scanf("%f", &Area2);

    printf ("Digite o Pib da 2a cidade: \n");
    scanf("%f", &PIB2);

    printf ("Digite a quantidade de pontos turísticos da 2a cidade: \n");
    scanf("%d", &PontosTuristicos2);
    
    printf (" Carta 1:\n- Estado 1: %s ",Estado1);
    printf ("\n- Codigo da Carta1: %s%s ", Estado1,CodCidade1);
    printf ("\n- Nome da cidade 1: %s ", NomeCidade1);
    printf ("\n- População da cidade 1: %d ", Populacao1);
    printf ("\n- Área da cidade 1: %f ", Area1);
    printf ("\n- Pib da cidade 1: %f ", PIB1);
    printf ("\n- Pontos turísticos da cidade 1: %d ", PontosTuristicos1);

    printf ("\n\n Carta 2:\n- Estado 2: %s ",Estado2);
    printf ("\n- Codigo da Carta2: %s%s ", Estado2,CodCidade2);
    printf ("\n- Nome da cidade 2: %s ", NomeCidade2);
    printf ("\n- População da cidade 2: %d ", Populacao2);
    printf ("\n- Área da cidade 2: %f ", Area2);
    printf ("\n- Pib da cidade 2: %f ", PIB2);
    printf ("\n- Pontos turísticos da cidade 2: %d ", PontosTuristicos2);

    return 0;
}
