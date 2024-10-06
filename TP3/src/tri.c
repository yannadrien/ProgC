#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE_TABLEAU 100

// Fonction principale
int main() {
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
    return 0;
}