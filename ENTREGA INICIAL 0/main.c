#include <stdio.h>
#include <stdlib.h>

int main()
{
    // "Problemas secuenciales"
    //EJERCICIO 1

    int capital;
    float intereses = 0.02;
    float ganancia;
    printf ("Ingrese su dinero a invertir ");
    scanf ("%i", &capital);
    ganancia=((float)capital*intereses);
    printf ("Su ganancia es de: $%.0f  ",ganancia);


    // EJERCICIO 2

    float descuento = 0.15, total;
    int precio;

    printf("Ingrese el precio: \n");
    scanf("%i", &precio);
    total = ((float) precio - (float)precio*descuento);
    printf("El total es de $%.0f \n", total);


    // EJERCICIO 3

    int hombres, mujeres, total;
    float porcentajeMuj, porcentajeHom;
    printf("Ingrese la cantidad de mujeres \n");
    scanf("%i", &mujeres);

    printf("Ingrese la cantidad de hombres \n");
    scanf("%i", &hombres);

    total = (mujeres + hombres);
    printf ("El total de alumnos es: %i \n", total);


    porcentajeHom = ((float)hombres/(float) total)*100;
    printf("%.0fporciento de hombres \n", porcentajeHom);

    porcentajeMuj = ((float)mujeres/(float) total)*100;
    printf("%.0fporciento de mujeres \n", porcentajeMuj);


    // "Condicionales selectivos simples"
    // EJERCICIO 1

    int i;
    float suma=0,notas,promedio;
    for (i=0; i<3; i++)
    {
        printf ("Ingrese su nota: \n");
        scanf ("%f",&notas);
        suma=(notas+suma);
    }
    promedio=(suma/3);
    printf("El promedio es: %.0f \n", promedio);
    if(promedio>=7)
    {
        printf("Usted esta aprobado \n");
    }
    else
    {
        printf("Usted esta desaprobado \n");
    }


    // EJERCICIO 2

    float total,descuento=0.20;
    int precio;
    printf ("Ingrese el monto de su compra:\n");
    scanf("%i",&precio);
    if (precio>=5000)
    {
        total = (precio-(precio*descuento));
        printf("El monto total de su compra con el descuento es de: $%.0f \n",total);
    }
    else
    {
        printf ("A su compra no se le aplico el descuento, el total es: $%i \n",precio);
    }


    // EJERCICIO 3

    int salario,horas,horasExtra,pagoExtra=400,pago=300;
    printf("Ingrese la cantidad de horas trabajadas: \n");
    scanf ("%i",&horas);
    if (horas>40)
    {
        horasExtra=(horas-40);
        horas = 40;
        salario=(horasExtra*pagoExtra)+(horas*pago);
    }
    else
    {
        salario=(horas*pago);
    }
    printf("El salario es de :%i",salario);


    // EJERCICIO 4

    float num1,num2;
    printf ("Ingrese el primer numero : \n");
    scanf ("%f", &num1);

    printf ("Ingrese el segundo numero : \n");
    scanf ("%f", &num2);

    if (num1>num2)
    {
        printf ("%.1f %.1f \n",num2, num1);
    }
    else
    {
        printf ("%.1f %.1f \n",num1, num2);
    }


    // EJERCICIO 5

    int cantidadCamisas,precioUnidad,total;
    float descuento1=0.10,descuento2=0.20;
    printf("Ingrese cuantas camisas comprara: \n");
    scanf ("%i",&cantidadCamisas);
    printf ("Ingrese el precio por unidad: \n");
    scanf ("%i", &precioUnidad);
    if (cantidadCamisas>=3)
    {
        total=(precioUnidad*cantidadCamisas);
        total=total-(total*descuento2);
    }
    else
    {
        total=(precioUnidad*cantidadCamisas);
        total=total-(total*descuento1);
    }
    printf("El precio total es de :$%i \n",total);



    //"PROBLEMAS CONDICIONALES SELECTIVOS COMPUESTOS"
    //EJERCICIO 1

    int num1,num2,resultado=0;
    printf ("Escriba su primer numero: \n");
    scanf ("%i",&num1);

    printf ("Escriba su segundo numero: \n");
    scanf ("%i",&num2);

    if (num1==num2)
    {
        resultado= num1*num2;

    }
    else if(num1>num2)
    {
        resultado=(num1-num2);

    }
    else
    {
        resultado=(num1+num2);

    }
    printf("El resultado de la operacion es %i \n",resultado);



    // EJERCICIO 2

    int num1,num2,num3;
    printf ("Ingrese el primer numero \n");
    scanf ("%i", &num1);
    printf ("Ingrese el segundo numero \n");
    scanf ("%i", &num2);
    printf ("Ingrese el tercer numero \n");
    scanf ("%i", &num3);
    if(num1>num2 && num1>num3)
    {
        printf ("El mayor es el %i \n",num1);
    }
    else if (num2>num1 && num2>num3)
    {
        printf ("El mayor es el %i \n",num2);
    }
    else
    {
        printf("El mayor es el %i \n",num3);
    }


    // PROBLEMAS CON REPETICIONES

    // EJERCICIO 1

    int suma, i, nota, cantidad = 7;
    float promedio;
    suma = 0;
    for (i=0; i<7; i++)
    {
        printf("Ingrese su nota \n");
        scanf("%i", &nota);
        suma = suma + nota;
    }
    printf("La suma total es %i \n", suma);
    promedio = (float)suma/cantidad;
    printf("El promedio es %.0f", promedio);



    // EJERCICIO 2
    int num, i;
    float cubo, cuarta;

    for(i=0; i<10; i++)
    {
        printf("Ingrese el numero \n");
        scanf("%i", &num);

        cubo = num*num*num;
        cuarta = num*num*num*num;
        printf("El cubo del numero ingresado es %.0f \n", cubo);
        printf("El cuadrado del numero ingresado es %.0f \n", cuarta);
    }


    //EJERCICIO 3

    float num;
    int i;
    for(i=0; i<10; i++)
    {
        printf("Ingrese un numero \n");
        scanf("%f", &num);
        if(num>0)
        {
            printf("El numero ingresado es: %.0f \n", num);
        }
        else
        {
            printf("Numero no valido. \n");
        }
    }


    //EJERCICIO 4
    float num;
    int i, positivo;
    for (i=0; i<15; i++)
    {
        printf("Ingrese un numero \n");
        scanf("%f", &num);
        if(num<0)
        {
            positivo = num*(-1);
            printf("Su numero en positivo es %i \n", positivo);
        }
        else
        {
            printf("Su numero no es negativo. \n");
        }
    }


    // EJERCICIO 5
    int i, cantidad = 40;
    float nota, promedio, suma = 0, notaBaja = 10;
    for(i=0; i<40; i++)
    {
        printf("Ingrese la nota del alumno \n");
        scanf("%f", &nota);
        if(notaBaja>nota)
        {
            notaBaja = nota;
        }
        else
        {
            notaBaja = notaBaja;
        }
        suma = suma + nota;

    }
    promedio = suma/cantidad;
    printf("El promedio de las notas es de: %.1f \n", promedio);
    printf("La nota mas baja es: %.1f \n", notaBaja);

    // EJERCICIO 6

    int num, i, resultado, multiplo = 0;

    printf("Ingrese el numero \n");
    scanf("%i", &num);

    for(i=0; i<10; i++)
    {
        multiplo = multiplo + 1;
        resultado = (num*multiplo);
        printf("%i x %i = %i \n", num, multiplo,resultado);
    }

    return 0;
}

