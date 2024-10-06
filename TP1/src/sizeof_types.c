#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("la taille en octect de char signé est %ld et non signé est %ld\n",sizeof(char),sizeof(unsigned(char)));
    printf("la taille en octect de short signé est %ld et non signé est %ld\n",sizeof(short),sizeof(unsigned(short)));
    printf("la taille en octect de int signé est %ld et non signé est %ld\n",sizeof(int),sizeof(unsigned(int)));
    printf("la taille en octect de long int signé est %ld et non signé est %ld\n",sizeof(long int),sizeof(unsigned(long int)));
    printf("la taille en octect de long long int signé est %ld et non signé est %ld\n",sizeof(long long int),sizeof(unsigned(long long int)));
    printf("la taille en octect de float signé est %ld et non signé est %ld\n",sizeof(float),sizeof(unsigned(float)));
    printf("la taille en octect de double signé est %ld et non signé est %ld\n",sizeof(double),sizeof(unsigned(double)));
    printf("la taille en octect de long double signé est %ld et non signé est %ld\n",sizeof(long double),sizeof(unsigned(long double)));
    return 0;
}