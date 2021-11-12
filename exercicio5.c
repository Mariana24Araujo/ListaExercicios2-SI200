#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int i = 0;
	char c;
	
    FILE *arqlinhas;
    arqlinhas = fopen("arquivo_linhas.txt", "r");

    if(arqlinhas == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(0);
    }

    c = getc(arqlinhas);
    while(!feof(arqlinhas)){
        if(c == '\n'){
            i++;
        }
        c = getc(arqlinhas);
    }

    fclose(arqlinhas);
    printf("O número de linhas no arquivo é: %d\n", i + 1);

    return 0;
}