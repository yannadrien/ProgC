#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct couleur_compteur
{
    int Rouge;
    int Vert;
    int Bleu;
    int Alpha;
};

int main(){
    srand(time(NULL));
    int n = 100;
    struct couleur_compteur couleur[n];
    for(int i = 0;i<n;i++){
        couleur[i].Rouge = rand()%256;
        couleur[i].Vert = rand()%256;
        couleur[i].Bleu = rand()%256;
        couleur[i].Alpha = rand()%256;
    }
    int j;
    for(int a = 0;a<n;a++){
        j = 0;
        for(int i = 0;i<n;i++){
            if(couleur[a].Rouge==couleur[i].Rouge && couleur[a].Vert == couleur[i].Vert && couleur[a].Bleu== couleur[i].Bleu && couleur[a].Alpha == couleur[i].Alpha){
                    j+=1;
            }
        }
        printf("%x %x %x %x : %d \n",couleur[a].Rouge,couleur[a].Vert,couleur[a].Bleu,couleur[a].Alpha,j);
    }
}