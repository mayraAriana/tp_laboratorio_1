#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    int opcion = 0;

    float num_1 = 0;
    float num_2 = 0;
    float res = 0;
    int aux = 0;
    int resFactorial = 0;


    do
    {
        system("cls");
        printf("Elija una opcion\n\n");
        printf("1_ Ingresar 1er operando (A=%.2f)\n",num_1);
        printf("2_ Ingresar 2do operando (B=%.2f)\n",num_2);
        printf("3_ Calcular la suma (A+B)\n");
        printf("4_ Calcular la resta (A-B)\n");
        printf("5_ Calcular la division (A/B)\n");
        printf("6_ Calcular la multiplicacion (A*B)\n");
        printf("7_ Calcular el factorial (A!)\n");
        printf("8_ Calcular todas las operaciones\n");
        printf("9_ Salir\n");

        printf("\n");
        printf("Opcion: ");
        scanf("%d",&opcion);
        printf("\n");

        while (opcion<1 || opcion>9)
        {
            printf("Ingrese una opcion valida");
            printf("\n");
            printf("\nOpcion: ");
            scanf("%d",&opcion);
            printf("\n");
        }

        switch(opcion)
        {
            case 1:
                printf("Ingresar 1er operando: ");
                scanf("%f",&num_1);
                aux = num_1;
                system("pause");
                break;
            case 2:
                printf("Ingresar 2do operando: ");
                scanf("%f",&num_2);
                system("pause");
                break;
            case 3:
                res = suma(num_1,num_2);
                printf("El resultado de la suma es: %.2f\n",res);
                system("pause");
                break;
            case 4:
                res = resta(num_1,num_2);
                printf("El resultado de la resta es: %.2f\n",res);
                system("pause");
                break;
            case 5:
                    if (num_2==0)
                    {
                        printf("No se puede dividir entre 0\n");
                    }
                    else
                    {
                        res = division(num_1,num_2);
                        printf("El resultado de la division es: %.2f\n",res);
                    }

                system("pause");
                break;
            case 6:
                res = multiplicacion(num_1,num_2);
                printf("El resultado de la multiplicacion es: %.2f\n",res);
                system("pause");
                break;
            case 7:

                if(aux-num_1!=0)
                {
                    printf("Error, no se puede sacar factorial con numeros decimales\n");
                }
                else
                {
                    resFactorial = factorial(num_1);
                    printf("El factorial es: %d\n",resFactorial);
                }

                system("pause");
                break;
            case 8:
                // SUMA
                res = suma(num_1,num_2);
                printf("El resultado de la suma es: %.2f\n",res);

                // RESTA
                res = resta(num_1,num_2);
                printf("El resultado de la resta es: %.2f\n",res);

                // DIVISION
                if (num_2==0)
                    {
                        printf("No se puede dividir entre 0\n");
                    }
                    else
                    {
                        res = division(num_1,num_2);
                        printf("El resultado de la division es: %.2f\n",res);
                    }

                // MULTIPLICACION
                res = multiplicacion(num_1,num_2);
                printf("El resultado de la multiplicacion es: %.2f\n",res);

                // FACTORIAL

                if(num_1<0 || num_1-aux!=0)
                {
                    printf("Error, no se puede sacar factorial con numeros decimales\n");
                }
                else
                {
                    resFactorial = factorial(num_1);
                    printf("El factorial es: %d\n",resFactorial);
                }
                system("pause");
                break;
            case 9:
                printf("Ha Salido\n");
                break;
        }

    } while(opcion<9);


    system("pause");
    return 0;
}
