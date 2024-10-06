#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: \n");
    scanf("%d",&n);
    int i;
    int j;
    for(i=1;i<n;i++){
        for(j=1;j<i;i++){
            if(j<=n-i||j>=n+i){
                printf(" ");
            }
        }
    }
}
