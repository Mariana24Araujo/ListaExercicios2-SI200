#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char c;
    int i = 0;

    FILE *arquivo;
    arquivo = fopen("arquivo_base.txt", "r+");

    if(arquivo == NULL){
        printf("Erro na abertura\n");
        exit(0);
    }

    c = getc(arquivo);
    
    while (!feof(arquivo)){
        if (c != ' ' && c != '\n'){
        i++;
        }
        c = getc(arquivo);
    }
    printf("O número de caracteres no texto dado é: %d\n", i);

    fseek(arquivo, sizeof(arquivo), SEEK_END);
    fprintf(arquivo, "%d", i);

    fclose(arquivo);
    return 0;
}