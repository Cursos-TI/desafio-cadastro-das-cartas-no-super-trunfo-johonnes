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
    char estado[3];
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float pib_per_capta;
    float densidade_populacional;

    
    // Cadastro das Cartas:
    // Sugest?o: Utilize a fun??o scanf para capturar as entradas do usu?rio para cada atributo.
    // Solicite ao usu?rio que insira as informa??es de cada cidade, como o Estado, c?digo, nome, popula??o, ?rea, etc.
    printf("Digite o estado (sigla): ");
    scanf("%s", estado);

    printf("Digite o c?digo da cidade: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%20s" , nome);
    //fflush(stdin);

    printf("Digite O n?mero de habitantes da cidade ");
    scanf("%d", &populacao);

    printf("Digite a ?rea da cidade em quil?metros quadrados: ");
    scanf("%f", &area);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos tur?sticos na cidade: ");
    scanf("%d", &pontosTuristicos);
    
    densidade_populacional = populacao / area;

    pib_per_capta = (pib * 1000000000) / populacao;
    // Exibi??o dos Dados das Cartas:
    // Sugest?o: Utilize a fun??o printf para exibir as informa??es das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %s\n", estado);
    printf("C?digo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("Popula??o: %d km?\n", populacao);
    printf("?rea: %.2f km?\n", area);
    printf("PIB: %.2f bilh?es de reais\n", pib);
    printf("N?meros de Pontos Tur?sticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capta);

    return 0;
}
