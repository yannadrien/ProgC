#include<stdio.h>
#include<stdlib.h>

int main(){
    char c = 'A';
    printf("%c\n", c); // prints A
    short s = -36;
    printf("%d\n", s); // prints -36
    int a = 4;
    printf("%d\n", a); // prints 4
    long int b = -1234567;
    printf("%ld\n", b); // prints -1234567
    long long int d = -12345678900987654321234567890;
    printf("%lld\n", d); 
    float e = 2.123;
    printf("%f\n", e); 
    double f = 2.12345678901234567890;
    printf("%lf\n", f); // prints 2.1234567890123457
    return 0;
}