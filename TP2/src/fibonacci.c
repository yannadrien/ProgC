#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=0;
    int b=1;
    int c,n;
    printf("Entrez la valeur de n \n");
    scanf("%d",&n);
    for (int i = 0; i<=n; i++) {
        if(i>=2){
            c = a+b;
            a = b;
            b = c;
            printf("%d",c);
        } else{
            printf("%d",i);
        }
    }
    return 0;

}