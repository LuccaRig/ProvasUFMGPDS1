#include <stdlib.h>
#include <stdio.h>

int NumeroDeLinhas(FILE* arquivo){
    int n=0; char c=0;
    while(!feof(arquivo)){
        c=fgetc(arquivo);
        if(c=='\n'){
            n++; 
        }
    }
    return (n+1);
}

long int* InicioLinhas(FILE* arquivo, int n_linhas){
    int i=0;
    char c=0;
    long int* linha = (long int*) malloc(n_linhas*sizeof(int));
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
    int n=0,z=0;
    int* linhas = NULL;
    long int posicao = 0;
    FILE* arquivo = fopen("x.txt", "r");
    int n_linhas = NumeroDeLinhas(arquivo);
    scanf("%d", &n);
    long int* Inicio = InicioLinhas(arquivo, n_linhas);
    int* vector = (int*) malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d", &vector[i]);
    }
    for(int i=0;i<n;i++){
    while(!feof(arquivo)){
        fscanf(arquivo, "%d", &z);
        if(z==vector[i]){
            posicao = ftell(arquivo);
            }
        }
        if(posicao){
            for(int j=1; j<n_linhas;j++){
                if(Inicio[j-1]<posicao && Inicio[j]>posicao){
                    printf("%d", j);
                    break;
                }
            }
        }else{
            printf("ERRO");
        } 
    }
    return 0;
}