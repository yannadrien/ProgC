#include<stdio.h>
#include<stdlib.h>

int main() {
    int n = 2;  // Nombre d'étudiant.e.s à gérer (vous pouvez ajuster à 5)
    float Note1[10], Note2[10];
    char noms[10][50];  // Tableau bidimensionnel pour les noms (10 étudiant.e.s, 50 caractères max)
    char adresses[10][100];  // Tableau bidimensionnel pour les adresses
    
    // Boucle pour saisir les informations des étudiant.e.s
    for(int i = 0; i < n; i++) {
        printf("Entrez le nom et prénom (sans espace) de l'étudiant.e %d: \n", i+1);
        scanf("%s", noms[i]);
        
        printf("Entrez l'adresse de l'étudiant.e %d: \n", i+1);
        scanf("%s", adresses[i]);
        
        printf("Entrez la note en Programmation C pour l'étudiant.e %d: \n", i+1);
        scanf("%f", &Note1[i]);
        
        printf("Entrez la note en Système d'exploitation pour l'étudiant.e %d: \n", i+1);
        scanf("%f", &Note2[i]);
        
        printf("\n");  // Ligne vide pour plus de clarté
    }

    // Boucle pour afficher les informations des étudiant.e.s
    printf("Informations des étudiant.e.s :\n\n");
    for(int i = 0; i < n; i++) {
        printf("Étudiant.e %d:\n", i + 1);
        printf("Nom et prénom : %s\n", noms[i]);
        printf("Adresse       : %s\n", adresses[i]);
        printf("Note en Programmation en C         : %.2f\n", Note1[i]);
        printf("Note en Système d'exploitation     : %.2f\n", Note2[i]);
        printf("-----------------------------\n");
    }
    
    return 0;
}