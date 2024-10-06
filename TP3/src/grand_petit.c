#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int Tab[100];
    int min = 0;
    int max = 0;
    srand(time(NULL));
    for(int i = 0;i<100;i++){
        Tab[i] = (rand()%1000)+1;
    }
    for(int i = 0;i<100;i++){
        if(Tab[i] < min){
            min = Tab[i];
        }
        if(Tab[i] > max){
            max = Tab[i];
        }
    }
    printf("le max du tableau est : %d\n",max);
    printf("le min est : %d\n",min);

}