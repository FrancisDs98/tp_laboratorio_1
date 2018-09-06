#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <stdio_ext.h>

float suma(float datoUno, float datoDos){

    float resultadoSuma;
    resultadoSuma = (datoUno + datoDos);
    return resultadoSuma;
}

float resta(float datoUno, float datoDos){

    float resultadoResta;
    resultadoResta = (datoUno - datoDos);
    return resultadoResta;
}

float multiplicacion(float datoUno, float datoDos){

    float resultadoMultiplicacion;
    resultadoMultiplicacion = (datoUno * datoDos);
    return resultadoMultiplicacion;
}

float division(float datoUno, float datoDos){

    float resultadoDivision;
    resultadoDivision = (datoUno / datoDos);
    return resultadoDivision;
}

float factorialAx(float datoUno){

    long long int resultadoFactorial=1;
    int i;

    for (i=datoUno; i>=1 ; i--){

        resultadoFactorial=resultadoFactorial*i;
    }

    return resultadoFactorial;
}

float factorialBy(float datoDos){

    long long int resultadoFactorial=1;
    int i;

    for (i=datoDos; i>=1 ; i--){

        resultadoFactorial=resultadoFactorial*i;
    }

    return resultadoFactorial;
}
