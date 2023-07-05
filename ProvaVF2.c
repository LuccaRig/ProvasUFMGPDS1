#include <stdlib.h>
#include <stdio.h>


void FazCinco(int** x){
    int y = 5; *x=&y;
}


int main(){
    int *x = NULL;
    FazCinco(&x);
    printf("%d\n", *x);
}