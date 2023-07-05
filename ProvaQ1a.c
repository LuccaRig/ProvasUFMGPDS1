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



int main(){
    
    FILE* arquivo = fopen("x.txt", "r");
    printf("%d", NumeroDeLinhas(arquivo));
    return 0;
}