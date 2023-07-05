#include <stdio.h>
#include <stdio.h>

int main(){
 float A=0;
 float*X=&A;
 float**Y=&X;
 float***Z=&Y;

 scanf("%f", **Z);
 printf("%f\n", ***Z + **Y + *X + A);

    return 0;
}