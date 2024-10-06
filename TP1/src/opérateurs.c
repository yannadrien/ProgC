#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 16;
    int b = 3;
    printf("addition %d\n",a+b);
    printf("soustraction %d\n",b-a);
    printf("multiplication %d\n",a*b);
    printf("division %d\n",a/b);
    printf("reste de la division %d\n",a%b);
    if (a == b)
        printf("a et b sont égaux\n");
    else{
        printf("a est différent de b\n");}
    if (a>b)
        printf("a est supérieur à b\n");
    return 0;
}