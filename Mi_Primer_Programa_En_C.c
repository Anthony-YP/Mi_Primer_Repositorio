// Incluimos la librería stdio.h par apoder usar printf y scanf//
#include <stdio.h>
// Definimos los tipos de variables que vamos a usar//
int num1, num2, opcion, resultado;
double decimal1, decimal2, resultadodecimal;
char *text;
// Iniciamos la funcion principal de neustro programa//
int main()
{
    // Doy valor a mi variable de tipo char//
    text = "Digite el número => ";
    // Presentamos y solicitamos al usuario que seleccione una opcion//
    printf("Selecciones una opción:\n");
    printf("1 -> Suma de enteros\n");
    printf("2 -> Suma de decimales\n");
    // Scaneamos el dato de entrada que ingresa el usuario a tráves del teclado//
    scanf("%i", &opcion);
    // Evaluamos la opccionn que escogio//
    if (opcion == 1)
    {
        // Guardamos los numeros ingresados por el usuario en cada una de las respectivas variables//
        printf("%s", text);
        scanf("%i", &num1);
        printf("%s", text);
        scanf("%i", &num2);
        // Guardamos la suma de los numeros ingresados por el usuario//
        resultado = num1 + num2;
        // Presentamos el resultado//
        printf("La suma de los dos numeros es = %i", resultado);
    }
    // Evaluamos la opcion elegida por el usuario//
    if (opcion == 2)
    {
        // Guardamos los numeros ingresados por el usuario en cada una de las respectivas variables//
        printf("%s", text);
        scanf("%lf", &decimal1);
        printf("%s", text);
        scanf("%lf", &decimal2);
        // Guardamos la suma de los numeros ingresados por el usuario//
        resultadodecimal = decimal1 + decimal2;
        // Presentamos el resultado//
        printf("La suma de los dos numeros decimales es = %lf", resultadodecimal);
    }

    return 0;
}