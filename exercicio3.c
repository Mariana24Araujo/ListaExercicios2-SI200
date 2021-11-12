#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TITULO 50
#define CONTEUDO 2000

int main (){
    char titulo[TITULO];
    char conteudo[CONTEUDO];
    
    printf("Digite o título do arquivo: ");
    fgets(titulo, sizeof(titulo), stdin);
    titulo[strlen(titulo) - 1] = '\0';

    printf("Digite o conteúdo do arquivo: ");
    fgets(conteudo, sizeof(conteudo), stdin);
    conteudo[strlen(conteudo) - 1] = '\0';

    FILE *arquivo;
    arquivo = fopen("arquivo.txt", "w");
    
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(0);
    }

    fprintf(arquivo, "%s", conteudo);

    rename("arquivo.txt", titulo);

    fclose(arquivo);

    printf("Arquivo gerado!\n");
    
    return 0;
}