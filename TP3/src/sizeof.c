#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    printf("la taille de int est :%ld\n",sizeof(int));
    printf("la taille de int* est :%ld\n",sizeof(int*));
    printf("la taille de int** est :%ld\n",sizeof(int**));
    printf("la taille de char* est :%ld\n",sizeof(char*));
    printf("la taille de char** est :%ld\n",sizeof(char**));
    printf("la taille de char*** est :%ld\n",sizeof(char***));
    printf("la taille de float* est :%ld\n",sizeof(float*));
    printf("la taille de float** est :%ld\n",sizeof(float**));
    printf("la taille de float*** est :%ld\n",sizeof(float***));
}