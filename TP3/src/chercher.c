#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int Tab[100];
    int n;
    for(int i = 0;i<100;i++){
        Tab[i] = (rand()%1000)+1;
    }
    printf("Entrez l'entier que vous  souhaitez recherchez : \n");
    scanf("%d",&n);
    int a = 0;
    for(int i = 0;i<100;i++){
        if(Tab[i] == n){
            printf("L'entier %d présent \n",n);
        }
        a += 1;
        if(a==100){
            printf("L'entier %d absent \n",n);
        }
    }

}