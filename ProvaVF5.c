#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=0;
    scanf("%d", &n);
    int* v = (int*) malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    for(int j=n; j>0;j--){
        printf("%d", v[j-1]);
    }
    printf("\n");
    return 0;
}