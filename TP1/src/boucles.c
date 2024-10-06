#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    printf("entrez la taille du triangle\n");
    scanf("%d",&a);
    int i;
    int j;
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            if (i!=a){
                if (j==1 || j==i ){
                    printf("* ");
                } else {
                    printf("# ");
                }

            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    
    }
    return 0;
}