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
     if (operation == '+'){

         addition = n1 + n2 ;
         printf("la somme des nombres est : %.1f", addition);
            }
            else if (operation == '-'){

                    soustraction = n1 - n2 ;
                    printf("n1 moins n2 : %.1f", soustraction);

            }
             else if (operation == '*'){

                    multiple = n1 * n2 ;
                    printf("n1 fois n2 est : %.1f", multiple) ;
            }

            else if (operation == '/'){

                    division = n1 / n2 ;
                    printf("n1 divise sur n2 : %.1f", division)  ;
            }

            return 0 ;




}