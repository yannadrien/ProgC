#include<stdio.h>
#include<stdlib.h>


int main(){
    int a,b;
    double c=1;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    int i;
    for(i=0;i<b;i++){
        c*=a;
    }
    printf("%lf\n",c);
}