#include <stdlib.h>
#include <stdio.h>

int* InicioLinhas(FILE* arquivo, int n_linhas){
    int i=0;
    char c=0;
    int* linha = (int*) malloc(n_linhas*sizeof(int));
    while(!feof(arquivo)){
        if(!i){
            linha[i] = ftell(arquivo);
        }
        c = fgetc(arquivo);
        if(c=='\n'){
            linha[i] = ftell(arquivo);
            i++;
        }

    }
    return linha;
}



int main(){
    
    FILE* arquivo = fopen("x.txt", "r");
    InicioLinhas(arquivo, 6);
    return 0;
}