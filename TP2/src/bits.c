#include <stdio.h>

int main() {
    // Déclarez et initialisez une variable entière
    unsigned int d;
    printf("enter one number:");
    scanf("%u",&d);
    
    // Vérifier le 4ème bit de gauche (bit 28 dans un entier 32 bits)
    int bit_4 = (d >> (31 - 3)) & 1;
    
    // Vérifier le 20ème bit de gauche (bit 12 dans un entier 32 bits)
    int bit_20 = (d >> (31 - 19)) & 1;
    
    // Afficher 1 si les deux bits sont à 1, sinon afficher 0
    if (bit_4 == 1 && bit_20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}