#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main(){
    unsigned int a = 4;
    unsigned int *vptr1 = &a;
    unsigned long int b = -1234567;
    unsigned long int *vptr2 = &b;
    unsigned long long int d = -12345678900987654321234567890;
    unsigned long int *vptr3 = &d;
    double f = 2.12345678901234567890;
    double *vptr4 = &f;
    printf("Avant la manipulation :\n");
    printf("Adresses de a : %p\n", vptr1);
    printf("les valeurs de a: %x\n",&vptr1);
    printf("Adresses de b : %p\n", vptr2);
    printf("les valeurs de b: %lx\n",&vptr2);
    printf("Adresses de d : %p\n", vptr3);
    printf("les valeurs de d: %x\n",&vptr3);
    printf("Adresses de f : %p\n", vptr4);
    printf("les valeurs de f: %x\n",&vptr4);

    
    vptr1 = &vptr1 + a;
    vptr2 = &vptr2 + b;
    vptr3 = &vptr3 + d ;

    printf("Après la manipulation :\n");
    printf("Adresses de a : %p\n", vptr1);
    printf("les valeurs de a: %x\n",&vptr1);
    printf("Adresses de b : %p\n", vptr2);
    printf("les valeurs de b: %lx\n",&vptr2);
    printf("Adresses de d : %p\n", vptr3);
    printf("les valeurs de d: %x\n",&vptr3);
    printf("Adresses de f : %p\n", vptr4);
    printf("les valeurs de f: %x\n",&vptr4);



    return 0;
}
