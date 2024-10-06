#include<stdio.h>
#include<stdlib.h>


int binaire(int n){
        int a;
        int b=0;
        int i;
        int s = n;
        int Tab[32];
        for(i=0;i<32;i++)
        {
            a = s % 2;
            Tab[31-i] = a;
            s = s/2;
        }
        for (i = 0; i < 32; i++)
        {
              printf("%d",Tab[i]);
        }
        
        printf("\n");
        return 0;
}

int main(){
    int n;
    printf("entrer un nombre :\n");
    scanf("%d",&n);
    binaire(n);
    return 0;
}