#include<stdio.h>
#include<stdlib.h>

struct etudiant
{    
    char noms[100];  
    char prenom[100];
    char adresses[100];  
    float Note1, Note2;
};




int main() {
    int n = 2;
    float n1,n2;
    char noms1[100];  
    char prenom1[100];
    char adresses1[100];  
    struct etudiant etudiant_cpe[10];
    
    for(int i = 0; i < n; i++) {
        printf("Entrez le nom de l'étudiant.e %d: \n", i+1);
        scanf("%s", noms1);

        printf("Entrez le prénom de l'étudiant.e %d: \n", i+1);
        scanf("%s", prenom1);
        
        printf("Entrez l'adresse de l'étudiant.e %d: \n", i+1);
        scanf("%s", adresses1);
        
        printf("Entrez la note en Programmation C pour l'étudiant.e %d: \n", i+1);
        scanf("%f", &n1);
        
        printf("Entrez la note en Système d'exploitation pour l'étudiant.e %d: \n", i+1);
        scanf("%f", &n2);
        
        printf("\n"); 
        strcpy(etudiant_cpe[i].prenom,prenom1);
        strcpy(etudiant_cpe[i].noms,noms1);
        strcpy(etudiant_cpe[i].adresses,adresses1);
        etudiant_cpe[i].Note1 = n1;
        etudiant_cpe[i].Note2 = n2;
        n1 = 0;
        n2 = 0;
        prenom1[0] = '\0';
        noms1[0] = '\0';
        adresses1[0] = '\0';
    }

    // Boucle pour afficher les informations des étudiant.e.s
    printf("Informations des étudiant.e.s :\n\n");
    for(int i = 0; i < n; i++) {
        printf("Étudiant.e %d:\n", i + 1);
        printf("Nom : %s\n", etudiant_cpe[i].noms);
        printf("prénom : %s\n", etudiant_cpe[i].prenom);
        printf("Adresse       : %s\n", etudiant_cpe[i].adresses);
        printf("Note en Programmation en C         : %.2f\n", etudiant_cpe[i].Note1);
        printf("Note en Système d'exploitation     : %.2f\n", etudiant_cpe[i].Note2);
        printf("-----------------------------\n");
    }
    
    return 0;
} 