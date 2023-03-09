#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///////////////////////////////Problemas Secuenciales///////////////////////////////

    /// 01
    const float ganancia = 0.2;
    float capital = 0;
    float capitalfinal = 0;
    printf("Ingrese capital a invertir:\n");
    scanf("%f", &capital);

    capitalfinal = capital + (capital * ganancia);

    printf("Usted ganara despues de un mes:\n$%g\n", capitalfinal);

    system("pause");

    /// 02

    const float DESCUENTO = 0.15;
    float precio = 0;
    float preciofinal = 0;
    float pcdescuento = 0;

    printf("Ingrese precio de su compra\n$");

    scanf("%f", &precio);

    pcdescuento = (precio * descuento);
    preciofinal = precio - pcdescuento;

    printf("Se le hizo un descuento de $%g, El precio final de su compra es: $%g", pcdescuento, preciofinal);

    system("pause");

    /// 03

    int hombres = 0;
    int mujeres = 0;
    int total = 0;
    float promedioh = 0;
    float promediom = 0;

    printf("Ingrese cantidad de alumnos hombres: \n");
    scanf("%d", &hombres);
    printf("Ingrese cantidad de alumnas mujeres: \n");
    scanf("%d", &mujeres);

    total = hombres + mujeres;

    promedioh = (float)hombres * 100 / (float)total;
    promediom = (float)mujeres * 100 / (float)total;

    printf("El porcentaje de alumnos hombres es:  %g \nEl porcentaje de alumnas mujeres es:  %g", promedioh, promediom);

    system("pause");

    ///////////////////////////////Problemas Condicionales Selectivos Simples ///////////////////////////////

    /// 01

    int nota1 = 0;
    int nota2 = 0;
    int nota3 = 0;
    float promedio;

    printf("Ingrese las 3 notas a continuacion:\n");
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);

    promedio = ((float)nota1 + (float)nota2 + (float)nota3) / 3;

    if (promedio >= 7)
    {
        printf("Su promedio es: %g APROBADO\n", promedio);
    }
    else
    {
        printf("Su promedio es: %g DESAPROBADO\n", promedio);
    }

    system("pause");

    /// 02

    float precio = 0;
    float preciofinal = 0;

    printf("Ingrese el precio de su compra: \n");
    scanf("%f", &precio);

    preciofinal = precio - (precio * descuento);

    if (precio > 5000)
    {
        printf("El precio final de su compra es: $%g\n", preciofinal);
    }
    else
    {
        printf("Precio menor a $5000, no se le realizara ningun descuento.\n");
    }

    system("pause");

    /// 03

    int horas = 0;
    int hextras = 0;
    int hcomunes = 0;
    int salariohextras = 0;
    int salariohcomunes = 0;

    printf("Ingrese horas trabajadas:\n");

    scanf("%i", &horas);

    hextras = horas - 40;
    hcomunes = horas - hextras;
    salariohcomunes = horas * 300;
    salariohextras = (hcomunes * 300) + (hextras * 400);

    if (horas <= 40)
    {
        printf("Su salario es: $%i\n", salariohcomunes);
    }
    else
    {
        printf("Su salario es: $%i\n", salariohextras);
    }

    system("pause");

    /// 04

    int num1 = 0;
    int num2 = 0;

    printf("Ingrese 2 numeros, se los mostrara en forma ascendente.\n");
    scanf("%i", &num1);
    scanf("%i", &num2);

    if (num1 < num2)
    {
        printf("\n%i;%i\n", num1, num2);
    }
    else
    {
        printf("\n%i;%i\n", num2, num1);
    }

    system("pause");

    /// 05

    int valor = 0;
    int cantidad = 0;
    float descuento20 = 0;
    float descuento10 = 0;

    printf("Ingrese cantidad de camisas:\n");
    scanf("%i", &cantidad);
    printf("Ingrese valor total de su compra:\n");
    scanf("%i", &valor);

    descuento20 = valor - (valor * 0.20);
    descuento10 = valor - (valor * 0.10);

    if (cantidad >= 3)
    {
        printf("Se le realizo un 20 de descuento. El total a pagar es: $%g\n", descuento20);
    }
    else
    {
        printf("Se le realizo un 10 de descuento. El total a pagar es: $%g\n", descuento10);
    }

    system("pause");

    ///////////////////////////////Problemas Condicionales Selectivos Compuestos///////////////////////////////

    /// 01

    int num1 = 0;
    int num2 = 0;

    printf("Ingrese 2 numeros:\n");
    scanf("%i", &num1);
    scanf("%i", &num2);

    if (num1 == num2)
    {
        printf("La multiplicacion entre los numeros es: %i\n", num1 * num2);
    }
    else
    {
        if (num1 > num2)
        {
            printf("La resta entre los numeros es: %i\n", num1 - num2);
        }
        else
        {
            printf("La suma entre los numeros es: %i\n", num1 + num2);
        }
    }

    system("pause");

    /// 02

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Ingrese 3 numeros:\n");
    scanf("%i", &num1);
    scanf("%i", &num2);
    scanf("%i", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("El mayor es: %i\n", num1);
    }
    else
    {
        if (num2 > num1 && num2 > num3)
        {
            printf("El mayor es: %i\n", num2);
        }
        else
        {
            printf("El mayor es: %i\n", num3);
        }
    }

    system("pause");

    ///////////////////////////////Problemas con repeticiones///////////////////////////////

    /// 01

    int nota = 0;
    int suma = 0;
    float promedio = 0;
    int i = 0;

    for (i = 0; i < 7; i++)
    {
        printf("Ingrese las notas del alumno:\n");
        scanf("%i", &nota);
        // suma = suma + nota;
        suma += nota;
    }

    promedio = (float)suma / (float)i;

    printf("El promedio es: %g", promedio);

    system("pause");

    /// 02

    int num = 0;
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Ingrese numero:\n");
        scanf("%d", &num);
        printf("Su cubo es: %d\n", num * num * num);
        printf("Su cuarta es: %d\n", num * num * num * num);
    }

    system("pause");

    /// 03

    int num = 0;
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);

        if (num > 0)
        {
            printf("%d es un numero positivo.\n", num);
        }
    }

    /// 04

    int num = 0;
    int i = 0;

    for (i = 0; i < 15; i++)
    {
        scanf("%d", &num);

        // num = num * -1;
        num *= -1;

        printf("%d", num);
    }

    system("pause");

    /// 05

    int i = 0;
    int nota = 0;
    int suma = 0;
    int menor = 0;

    scanf("%d", &nota);

    menor = nota;

    for (i = 0; i < 39; i++)
    {
        scanf("%d", &nota);

        suma += nota;

        if (nota < menor)
        {
            menor = nota;
        }
    }

    float promedio = 0;

    promedio = suma / 40;

    system("pause");

    /// 06

    int multiplicando = 0;
    int multiplicador = 0;
    int producto = 0;

    printf("holaaaa");

    scanf("%d", &multiplicando);

    for (multiplicador = 1; multiplicador < 11; multiplicador++)
    {
        printf("%d * %d = %d", multiplicando, multiplicador, multiplicando * multiplicador);
    }

    return 0;
}
