#include <stdio.h>
#include <stdio.h>

int main(){
    int M[4][3] = { {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    int* x = (int*) M;

    for(int i=0;i<12;i++,x++){
        if(i%4) printf(" ");
        printf("%d", *x);
        if((i+1) % 4 == 0) printf("\n"); 
    }
    return 0;


}