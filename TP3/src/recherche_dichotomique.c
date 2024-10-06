#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int recherche_dicho(int tab[] , int taille ,int nbr_rech){
    int debut  = 0;
    int fin = taille - 1 ;
    int milieu;
    while (debut <= fin)
    {
        milieu  = debut + (fin - debut)/2 ;
        if (tab[milieu] == nbr_rech){
            return milieu;
        }

        if(tab[milieu] < nbr_rech){
            debut = milieu + 1 ;
        }
        else{
            fin = milieu-1 ;
        }

    }
    return -1;

}

int main(){
    int TAILLE_TABLEAU = 100; 
    int tableau[TAILLE_TABLEAU];
    int *ptr_i, *ptr_j, temp;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des entiers aléatoires entre 1 et 1000
    printf("Tableau initial :\n");
    for (int i = 0; i < TAILLE_TABLEAU; i++) {
        tableau[i] = (rand() % 1000) + 1;  // Génère des entiers entre 1 et 1000
        printf("%d, ", tableau[i]);  // Affiche le tableau non trié
    }

    // Tri à bulles (Bubble Sort) avec pointeurs
    for (int i = 0; i < TAILLE_TABLEAU - 1; i++) {
        for (int j = 0; j < TAILLE_TABLEAU - i - 1; j++) {
            // Utilisation des pointeurs pour accéder aux éléments du tableau
            ptr_i = &tableau[j];
            ptr_j = &tableau[j + 1];

            if (*ptr_i > *ptr_j) {
                // Échange des valeurs pointées par ptr_i et ptr_j
                temp = *ptr_i;
                *ptr_i = *ptr_j;
                *ptr_j = temp;
            }
        }
    }

    // Affichage du tableau trié
    printf("\n\nTableau trié :\n");
    for (int i = 0; i < TAILLE_TABLEAU; i++) {
        printf("%d, ", tableau[i]);  // Affiche le tableau trié
    }

    printf("\n");

    srand(time(NULL));
    int n;
    for(int i = 0;i<100;i++){
        tableau[i] = (rand()%1000)+1;
    }
    printf("Entrez l'entier que vous  souhaitez recherchez : \n");
    scanf("%d",&n);
    int a;
    a = recherche_dicho(tableau,TAILLE_TABLEAU,n);
    if(a != -1){
        printf("L'entier présent.\n");
    }
    else{
        printf("L'entier absent.\n");
    }
    

}