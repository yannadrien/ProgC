#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int Tab_e[50];
    float Tab_r[50];
    int *a ;
    float *b ;
    for(int i = 0;i<50;i++){
        Tab_e[i]=rand()%100;
        Tab_r[i]=rand()%100;
        a = &Tab_e[i];
        b = &Tab_r[i];
        if(i%2 == 0){
            *a *= 3;
            *b *= 3;
        }
    }
    printf("les valeurs du tableau des entiers\n");
    for(int i = 0;i<50;i++){
        printf("%d ,",Tab_e[i]);
    }
    printf("\nles valeurs du tableau des réels\n");
    for(int i = 0;i<50;i++){
        printf("%f ,",Tab_r[i]);
    }
}