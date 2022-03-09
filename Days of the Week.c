#include <stdio.h>

int main ()
{
    int num;
    
    printf ("Digite um dia da semana (0-6): ");
    scanf ("%d",&num);

    switch (num)
        {
            case 1:
                printf ("Segunda-feira\n");
                break;
            case 2:
                printf ("Terca-feira\n");
                break;
            case 3:
                printf ("Quarta-feira\n");
                break;
            case 0:
                printf ("Domingo\n");
                break;
            case 4:
                printf ("Quinta-feira\n");
                break;
            case 5:
                printf ("Sexta-feira\n");
                break;
            case 6:
                printf ("Sabado\n");
                break;
            default:
               printf ("Numero da semana incorreto.\n");
        }

    return(0);
}