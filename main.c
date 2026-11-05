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

    printf("Choisissez votre types d'opérations + , - , * , / , %%  : ");
    scanf(" %c" ,&op);
  
    if (op == '+')
    {
      int result = n1 + n2;
        printf("addition\n");
        printf("%d + %d = %d\n", n1 , n2 , result);
    }

    else if (op == '-')
    {
        int result = n1 - n2;
        printf("soustraction\n");
        printf("%d - %d = %d\n", n1 , n2 , result);
    }

    else if (op == '*')
    {
        int result = n1 * n2;
        printf("multiplication\n");
        printf("%d * %d = %d\n", n1 , n2 , result);
    }

    else if (op == '/')
    {
        double result = n1 / n2;
        printf("division\n");
        printf("%d / %d = %.2f\n", n1 , n2 , result);
    }
    
    else if (op == '%')
    {
        double result = n1 % n2;
        printf("modulo\n");
        printf("%d %% %d = %.2f\n", n1 , n2 , result);
    }

    else 
    {
        printf("l'opérateur n'est pas reconnu\n");
    }


    exit(0);
}