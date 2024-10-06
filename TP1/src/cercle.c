#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int r;
    float const pi = M_PI;
    float a;
    double p;
    printf("entrez la valeur du rayon");
    scanf("%d",&r);
    a =  pi*r*r;
    p = 2*pi*r;
    printf("l'aire du cercle est %f\n",a);
    printf("le périmetre est %f\n",p);
    return 0;
}