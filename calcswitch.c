#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1 , n2  ,addition , soustraction , multiple , division ;
    char operation ;
    printf("s il vous plait entrer le premier nombre: \n");
    scanf("%f", &n1);

    printf("s'il vous plait entrer le deuxieme nombre: \n");
    scanf("%f",&n2);

    printf("enter votre operation: \n");
    scanf(" %c", &operation);

       switch(operation) {
        case'+' :

                    addition = n1 + n2 ;
                    printf("la somme des nombres est :  %.1f", addition );
                    break ;
        case '-' :

                    soustraction = n1 - n2 ;
                    printf("n1 moins n2 est :  %.1f", soustraction );
                    break ;

         case '/' :

                    division = n1 / n2 ;
                    printf("n1 diviser sur n2 est :  %.1f", division );
                    break ;

         case '*' :

                    multiple = n1 * n2 ;
                    printf("n1 multiplier par n2 est :  %.1f", soustraction );
                    break ;





       }



            return 0 ;

}