#include<stdio.h>
#include<locale.h>

// Desafio Super Trunfo - Pa?ses
// Tema 1 - Cadastro das Cartas
// Este c?digo inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os coment?rios para implementar cada parte do desafio.
//Teste Wallison 

int main() {
    // Sugest?o: Defina vari?veis separadas para cada atributo da cidade.
    // Exemplos de atributos: Estado, c?digo da cidade, nome da cidade, popula??o, ?rea, PIB, n?mero de pontos tur?sticos.
    setlocale(LC_ALL, "Portuguese");
         //carta1
    char estado1[3]= "A";
    char codigo1[5] = "A01";
    char nome1[20]="S�o Paulo";
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float pib_per_capta1;
    float densidade_populacional1;
    double resultado1;
    double resultado2;
    double superpoder1;
    int cont1;

        //carta2
    char estado2[3] = "B";
    char codigo2[5]= "B02";
    char nome2[20] = "Rio de Janeiro";
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float pib_per_capta2;
    float densidade_populacional2;
    float superpoder2;
    int cont2;

    
    // Cadastro das Cartas:
    printf("Cadastro da primeira carta\n");

    //printf("Digite o estado (sigla): ");
    //scanf("%s", estado1);

    //printf("Digite o c�digo da cidade: ");
    //scanf("%s", codigo1);

    //printf("Digite o nome da cidade: ");
    //scanf("%20s" , nome1);

    printf("Digite O n�mero de habitantes da cidade ");
    scanf("%ld", &populacao1);

    printf("Digite a �rea da cidade em quil�metros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos tur�sticos na cidade: ");
    scanf("%d", &pontosTuristicos1);
    
    densidade_populacional1 = populacao1 / area1;

    pib_per_capta1 = (pib1 * 1000000000) / populacao1;

    resultado1 = populacao1 + pontosTuristicos1;

    resultado2 = resultado1 + area1;

    resultado1 = pib1 + resultado2;

    resultado2 = pib_per_capta1 + resultado1;

    resultado1 = resultado2 + (1/densidade_populacional1);

    superpoder1 = resultado1;

    printf("Cadastro da segunda carta\n");

    //printf("Digite o estado (sigla): ");
    //scanf("%s", estado2);

    //printf("Digite o c�digo da cidade: ");
    //scanf("%s", codigo2);

    //printf("Digite o nome da cidade: ");
    //scanf("%20s" , nome2);

    printf("Digite O n�mero de habitantes da cidade ");
    scanf("%ld", &populacao2);

    printf("Digite a �rea da cidade em quil�metros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos tur�sticos na cidade: ");
    scanf("%d", &pontosTuristicos2);
    
    densidade_populacional2 = populacao2 / area2;

    pib_per_capta2 = (pib2 * 1000000000) / populacao2;

    resultado1 = populacao2 + pontosTuristicos2;

    resultado2 = resultado1 + area2;

    resultado1 = pib2 + resultado2;

    resultado2 = pib_per_capta2 + resultado1;

    resultado1 = resultado2 + (1/densidade_populacional2);

    superpoder2 = resultado1;

    // Exibi��o dos Dados das Cartas:

    printf("\n--- Dados da Carta1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("C�digo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Popula��o: %ld \n", populacao1);
    printf("�rea: %.2f km�\n", area1);
    printf("PIB: %.2f bilh�es de reais\n", pib1);
    printf("N�meros de Pontos Tur�sticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km�\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capta1);
    printf("resultado1: %f\n", resultado1);
    printf("resultado2: %f\n", resultado2);
    printf("super poder: %f\n", superpoder1);

    printf("\n--- Dados da Carta2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("C�digo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Popula��o: %ld \n", populacao2);
    printf("�rea: %.2f km�\n", area2);
    printf("PIB: %.2f bilh�es de reais\n", pib2);
    printf("N�meros de Pontos Tur�sticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km�\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capta2);
    printf("super poder: %f\n", superpoder2);

        // batalha das cartas
    if (populacao1>populacao2)
    {
        /* code */
        printf("*******Popula��o********\n");
        printf("Carta1, venceu!!!\n");
        cont1++;
    }else{
        printf("*******Popula��o********\n");
        printf("Carta2, venceu!!!\n");
        cont2++;
    }

     if (area1>area2)
    {
        /* code */
        printf("*******�rea km�********\n");
        printf("Carta1, venceu!!!\n");
        cont1++;
    }else{
        printf("*******�rea km�********\n");
        printf("Carta2, venceu!!!\n");
        cont2++;
    }

     if (pib1>pib2)
    {
        /* code */
        printf("*******PIB********\n");
        printf("Carta1, venceu!!!\n");
        cont1++;
    }else{
        printf("*******PIB********\n");
        printf("Carta2, venceu!!!\n");
        cont2++;
    }

     if (pontosTuristicos1>pontosTuristicos2)
    {
        /* code */
        printf("*******Pontos Tur�sticos********\n");
        printf("Carta1, venceu!!!\n");
        cont1++;
    }else{
        printf("*******Ponto Tur�sticos********\n");
        printf("Carta2, venceu!!!\n");
        cont2++;
    }

     if (densidade_populacional1<densidade_populacional2)
    {
        /* code */
        printf("*******Densidade Populacional********\n");
        printf("Carta1, venceu!!!\n");
        cont1++;
    }else{
        printf("*******Densidade Populacional********\n");
        printf("Carta2, venceu!!!\n");
        cont2++;
    }

     if (pib_per_capta1>pib_per_capta2)
    {
        /* code */
        printf("*******PIB PER CAPTA********\n");
        printf("Carta1, venceu!!!\n");
        cont1++;
    }else{
        printf("*******PIB PER CAPTA********\n");
        printf("Carta2, venceu!!!\n");
        cont2++;
    }

     if (superpoder1>superpoder2)
    {
        /* code */
        printf("*******SUPERPODER********\n");
        printf("Carta1, venceu!!!\n");
        cont1++;
    }else{
        printf("*******SUPERPODER********\n");
        printf("Carta2, venceu!!!\n");
        cont2++;
    }

     if (cont1>cont2)
    {
        /* code */
        printf("*******VENCEDOR********\n");
        printf("Carta1, venceu!!! Por %d a %d\n",cont1, cont2);
        
    }else{
        printf("*******VENCEDOR********\n");
        printf("Carta2, venceu!!! Por %d a %d\n",cont2, cont1);
    
    }

    return 0;
}
