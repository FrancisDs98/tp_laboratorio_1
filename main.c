#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"

int main()
{
    float datoUno;
    float datoDos;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    float factorialA;
    float factorialB;
    char opcion;

    do
    {
        printf(".-(1) Ingresar el primer operando\n");
        printf(".-(2) Ingresar el segundo operando\n");
        printf(".-(3) Calcular todas las operanciones\n");
        printf(".-(4) Informar resultados\n");
        printf(".-(5) Salir\n");
        fflush(stdin);
        scanf("%c", &opcion);

        switch(opcion)
        {
            case '1':
                printf("\nIngrese el primer numero: \n");
                scanf("%f", &datoUno);
                printf("\nPrimer dato guardado correctamente!\n");
                    break;
            case '2':
                printf("\nIngrese el segundo numero: \n");
                scanf("%f", &datoDos);
                printf("Segundo dato guardado correctamente!\n");
                    break;
            case '3':
                resultadoSuma=suma(datoUno, datoDos);
                resultadoResta=resta(datoUno, datoDos);
                resultadoMultiplicacion=multiplicacion(datoUno, datoDos);
                resultadoDivision=division(datoUno, datoDos);
                factorialA=factorialAx(datoUno);
                factorialB=factorialBy(datoDos);
                printf("Calculando.\n");
                system("pause");
                system("cls");
                    break;
            case '4':
                printf("\n--El resultado de la suma(%.2f+%.2f) es: %.2f \n",datoUno, datoDos, resultadoSuma);
                printf("\n--El resultado de la resta(%.2f-%.2f) es: %.2f \n",datoUno, datoDos,resultadoResta);
                printf("\n--El resultado de la multiplicacion(%.2f*%.2f) es: %.2f \n",datoUno, datoDos, resultadoMultiplicacion);
                printf("\n--El resultado de la division(%.2f/%.2f) es: %.2f \n",datoUno, datoDos, resultadoDivision);
                printf("\n--El factorial del primer operando (%.2f) es: %.2f\n",datoUno, factorialA);
                printf("\n--El factorial del segundo operando (%.2f) es: %.2f\n",datoDos, factorialB);
                    break;
            case '5':
                printf("Gracias por utilizar el programa...\n");
                    break;
            default:
                printf("Debe ingresar una opcion valida\n");
                    break;
        }
        system("pause");
        system("cls");


    }while(opcion!='5');

        printf(".-(1) Ingresar el primer operando\n");
        printf(".-(2) Ingresar el segundo operando\n");
        printf(".-(3) Calcular todas las operanciones\n");
        printf(".-(4) Informar resultados\n");
        printf(".-(5) Salir");

    return 0;
}
