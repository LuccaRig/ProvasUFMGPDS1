#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE* arquivo = fopen("x.txt", "w");
    int x[5] = {1,2,3,4,5};
    fwrite(x, sizeof(int), 5, arquivo);
    return 0;
}