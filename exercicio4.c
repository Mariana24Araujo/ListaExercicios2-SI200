#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
    char escolher[40];
    char impressao[10];
	char disponivel[] = "arquivo_base.txt";
    char l;

    while(1){

        printf("Digite o arquivo para abrir: ");
        fgets(escolher, sizeof(escolher), stdin);
        escolher[strlen(escolher) - 1] = '\0';

        if(strcmp(escolher, disponivel) == 0 || strcmp(escolher, "arquivo_base") == 0) {
						
            FILE *arquivo;
            arquivo = fopen("arquivo_base.txt", "r");

            if(arquivo == NULL){
                printf("Erro ao abrir o arquivo\n");
                exit(0);
            }

            l = getc(arquivo);

            while (!feof(arquivo)){
                fscanf(arquivo, "%s", impressao);
                printf("%s", impressao);
                
                if(l == ' '){
                    printf(" ");
                }
                else if(l == '\n'){
                    printf("\n");
                }
                l = getc(arquivo);
            }
            fclose(arquivo);

            printf("\n");
            exit(0);
        }
        else if(escolher != disponivel){
            printf("Arquivo não disponível\n");
        }
    }

    return 0;
}