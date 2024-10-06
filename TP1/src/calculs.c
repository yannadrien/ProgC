#include<stdio.h>
#include<stdlib.h>

int main(){
    int num1,num2,a;
    char op;
    printf("Entrez 2 nombres et un caractère(opérateur): ");
    scanf("%d %d %c",&num1,&num2,&op);
    switch (op)
    {
    case '+':
        a = num2 + num1;
        printf("%d\n",a);
        break;
    
    case '-':
        a = num2 - num1;
        printf("%d\n",a);
        break;
    case '*':
        a = num2*num1;
        printf("%d\n",a);
        break;
    case '/':
        a = num2/num1;
        printf("%d\n",a);
        break;
    case '%':
        a = num2%num1;
        printf("%d\n",a);
        break;
    case '&':
        a = num2&num1;
        printf("%d\n",a);
        break;
    case '|':
        a = num2|num1;
        printf("%d\n",a);
        break;
    case '~':
        a = num2;~num1;
        printf("%d\n",a);
        break;
    }
    return 0;
}

