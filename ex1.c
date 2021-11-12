 #include <stdio.h>
 
 int main()
 {
    FILE *fp;
    fp = fopen ("arquivo_base.txt", "r");
    if (fp == NULL) {
       printf ("Houve um erro ao abrir o arquivo.\n");
       return 1;
    }
    printf ("Arquivo arquivo_base aberto com sucesso.\n");
    fclose (fp);
    return 0;
 }