#include<stdio.h>
#include<stdlib.h>


int main(){
    int somme = 0;
    int i = 0;
    int n = 1000;
    for (i=0;i<n;i++){
        if (i%5 == 0 || i%7 == 0)
            somme += i;
        if (i%11==0)
            continue;
        if (somme>5000)
            break;
    }
    printf("%d\n",somme);
    return 0;
}