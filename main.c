#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n1;
    int n2;
    char op;

    printf("Choisissez votre premier nombre : ");
    scanf("%d",&n1);

    printf("Choisissez votre deuxième : ");
    scanf("%d",&n2);

    printf("Choisissez votre types d'opérations + , - , * , / , %  : ");
    scanf("%s" ,&op);
  
    if (op == '+')
    {
        printf("addition\n");
    }

    else if (op == '-')
    {
        printf("soustraction\n");
    }

    else if (op == '*')
    {
        printf("multiplication\n");
    }

    else if (op == '/')
    {
        printf("division\n");
    }
    
    else if (op == '%')
    {
        printf("modulo\n");
    }

    else 
    {
        printf("l'opérateur n'est pas reconnu\n");
    }


    exit(0);
}