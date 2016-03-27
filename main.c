#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    double x = 0, y = 0, suma, resta, division, multiplicacion, factoreo;
    int opcion = 0;
    int band = 0, band1 = 0, band2 = 0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A = %.0Lf)\n",x);
        printf("2- Ingresar 2do operando (B = %.0Lf)\n",y);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        system("cls");

        switch(opcion)
        {
            case 1:
                printf("Ingresar el primer numero : ");
                scanf("%Lf", &x);
                system("cls");
                band = 1;
                break;
            case 2:
                printf("\nIngresar el segundo numero : ");
                scanf("%Lf", &y);
                system("cls");
                band1 = 1;
                if(y == 0)
                {
                    band2 = 1;
                }
                else
                {
                    band2 = 0;
                }
                break;
            case 3:
                if(band == 1 && band1 ==1)
                {
                    suma = Suma(x,y);
                    printf("\nLa suma es : %.0Lf \n",suma);
                    system("pause");
                    system("cls");
                }
                else
                {
                    printf("Ingrese primero Los numeros en la opcion 1 y 2 \n");
                    system("pause");
                    system("cls");
                }
                system("cls");
                break;
            case 4:
                if(band == 1 && band1 ==1)
                {
                    resta = Resta(x,y);
                    printf("\nLa resta es : %.0Lf \n",resta);
                    system("pause");
                    system("cls");
                }
                else
                {
                    printf("Ingrese primero Los numeros en la opcion 1 y 2 \n");
                    system("pause");
                    system("cls");
                }
                system("cls");
                break;
            case 5:
                if(band2 == 0)
                {
                    division = Division(x,y);
                    printf("La Division es : %.0Lf \n",division);
                    system("pause");
                    system("cls");
                }
                else
                {
                    printf("No se puede Dividir por 0 \n");
                    system("pause");
                    system("cls");
                }
                break;
            case 6:
                if(band == 1 && band1 ==1)
                {
                    multiplicacion = Multiplicacion(x,y);
                    printf("\nLa Multiplicacion es : %.0Lf \n",multiplicacion);
                    system("pause");
                    system("cls");
                }
                else
                {
                    printf("\nIngrese primero Los numeros en la opcion 1 y 2 \n");
                    system("pause");
                    system("cls");
                }
                break;
            case 7:
                if(band == 1)
                {
                    factoreo = Factoreo(x);
                    printf("\nEl numero %.0Lf su factorial es : %.0Lf \n",x ,factoreo);
                    system("pause");
                    system("cls");
                }
                else
                {
                    printf("Por favor ingrese 1 valor para poder hacer la Factorizacion \n");
                    system("pause");
                    system("cls");
                }
                break;
            case 8:
                if(band == 1 && band1 && 1)
                {
                    suma = Suma(x,y);
                    printf("\nLa suma es : %.0Lf \n",suma);

                    resta = Resta(x,y);
                    printf("\nLa resta es : %.0Lf \n",resta);

                    if(band2 == 0)
                    {
                        division = Division(x,y);
                        printf("\nLa Division es : %.0Lf \n",division);
                    }
                    else
                    {
                        printf("No se puede Dividir por 0 \n");
                    }

                    multiplicacion = Multiplicacion(x,y);
                    printf("\nLa Multiplicacion es : %.0Lf \n",multiplicacion);

                    factoreo = Factoreo(x);
                    printf("\nEl numero %.0Lf su factorial es : %.0Lf \n",x ,factoreo);

                    system("pause");
                    system("cls");
                }

                break;
            case 9:
                seguir = 'n';
                break;
        }
    }


    return 0;
}
