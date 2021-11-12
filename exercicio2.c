#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char i;
    int l = 0;

    FILE *arquivo;
    arquivo = fopen("arquivo_base.txt", "r+");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(0);
    }

    i = getc(arquivo);
    
    while (!feof(arquivo)){
        if (i == 'a' || i == 'A' || i == 'e' || i == 'E' || i == 'i' || i == 'I' || i == 'o' || i == 'O' || i == 'u' || i == 'U'){
        l++;
        }
        i = getc(arquivo);
    }
    
    printf("O número de vogais no texto do arquivo é: %d\n", l);

    fclose(arquivo);
    return 0;
}