#include<stdio.h>
#include<stdlib.h>

struct couleur
{    
    int Rouge;  
    int Vert;
    int Bleu;  
    int Alpha;
};




int main() {
    int n = 2;
    int Alpha1;
    int Rouge1;  
    int Vert1;
    int Bleu1;  
    struct couleur dix_couleur[10];
    
    for(int i = 0; i < n; i++) {
        printf("Entrez la valeur de la couleur rouge %d: \n", i+1);
        scanf("%x",&Rouge1);

        printf("Entrez la valeur de la couleur verte %d: \n", i+1);
        scanf("%x",&Vert1);
        
        printf("Entrez la valeur de la couleur bleu %d: \n", i+1);
        scanf("%x",&Bleu1);
        
        printf("Entrez la valeur de la couleur alpha %d: \n", i+1);
        scanf("%x", &Alpha1);
        
        
        printf("\n"); 
        dix_couleur[i].Rouge = Rouge1;
        dix_couleur[i].Bleu = Bleu1;
        dix_couleur[i].Vert = Vert1;
        dix_couleur[i].Alpha = Alpha1;
        Rouge1 = 0;
        Vert1 = 0;
        Bleu1 = 0;
        Alpha1 = 0;
        
    }

    // Boucle pour afficher les informations des étudiant.e.s
    printf("Informations des dix couleurs :\n\n");
    for(int i = 0; i < n; i++) {
        printf("Couleur %d:\n", i + 1);
        printf("Rouge: %d\n", dix_couleur[i].Rouge);
        printf("Vert : %d\n", dix_couleur[i].Vert);
        printf("Bleu: %d\n", dix_couleur[i].Bleu);
        printf("Alpha: %d\n", dix_couleur[i].Alpha);
        printf("-----------------------------\n");
    }
    
    return 0;
} 