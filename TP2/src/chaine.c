#include<stdio.h>
#include<stdlib.h>

int main(){
    char c[50];
    printf("Entrez un 1er mot: ");
    scanf("%s",c);
    char d[50];
    printf("Entrez un 2e  mot: ");
    scanf("%s", d);
    char copy[50];
    char conca[100];
    int k=0;
    int i = 0;
    while(c[k]!='\0'){
        copy[k]=c[k];
        conca[k] = c[k];
        k+=1;
    }
    conca[k] =' ';
    while(d[i]!='\0'){
        conca[k+i+1] = d[i];
        i+=1;
    }
    printf("la taille du 1er mot est:%d\n",k);
    printf("la copie du 1er mot est :%s\n",copy);
    printf("la concatenation donne:%s\n",conca);
    return 0;

}