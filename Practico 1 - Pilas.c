#include <stdio.h>
#include <stdlib.h>
// #include "pila.h"

int main()
{
    /////////////////////////////////////// 01 ///////////////////////////////////////

    int i = 0;
    Pila p, aux1, aux2;

    inicpila(&p);
    inicpila(&aux1);
    inicpila(&aux2);
    int i = 0;

    for (int i = 0; i < 5; i++)
    {
        leer(&p);
    }

    while (!pilavacia(&p))
    {
        if (i < 3)
        {
            apilar(&aux1, desapilar(&p));
        }
        else
        {
            apilar(&aux2, desapilar(&p));
        }

        i++;
    }

    printf("AUX1");
    mostrar(&aux1);

    printf("AUX2");
    mostrar(&aux2);

    system("pause");

    /////////////////////////////////////// 02 ///////////////////////////////////////

    Pila origen, destino;
    char continuar;
    inicpila(&origen);
    inicpila(&destino);

    do
    {
        leer(&origen);
        printf("Ingrese s/n para continuar: ");
        fflush(stdin);
        scanf("%c", &continuar);
    } while (continuar == 's');

    printf("Origen:");
    mostrar(&origen);

    while (!pilavacia(&origen))
    {
        apilar(&destino, desapilar(&origen));
    }

    printf("Destino:");
    mostrar(&destino);

    system("pause");

    /////////////////////////////////////// 03 ///////////////////////////////////////

    Pila p, distintos, aux;
    char continuar;

    inicpila(&p);
    inicpila(&distintos);
    inicpila(&aux);

    do
    {
        leer(&p);
        printf("Ingrese s/n para continuar:\n");
        fflush(stdin);
        scanf("%c", &continuar);
    } while (continuar == 's');

    printf("Pila\n");
    mostrar(&p);

    while (!pilavacia(&p))
    {
        if (tope(&p) != 8)
        {
            apilar(&distintos, desapilar(&p));
        }
        else
        {
            apilar(&aux, desapilar(&p));
        }
    }

    printf("Distintos\n");
    mostrar(&distintos);

    system("pause");

    /////////////////////////////////////// 04 ///////////////////////////////////////

    Pila origen, destino, aux;

    char continuar;
    inicpila(&origen);
    inicpila(&destino);
    inicpila(&aux);

    do
    {
        leer(&origen);
        printf("Ingrese (s/n) para continuar: ");
        fflush(stdin);
        scanf("%c", &continuar);
    } while (continuar == 's');

    printf("Origen:");
    mostrar(&origen);

    while (!pilavacia(&origen))
    {
        apilar(&aux, desapilar(&origen));
    }

    printf("AUX:");
    mostrar(&aux);

    while (!pilavacia(&aux))
    {
        apilar(&destino, desapilar(&aux));
    }

    printf("DESTINO:");
    mostrar(&destino);

    /////////////////////////////////////// 05 ///////////////////////////////////////

    Pila p, aux1, aux2;
    char continuar;
    inicpila(&p);
    inicpila(&aux1);
    inicpila(&aux2);

    do
    {
        leer(&p);
        printf("Ingrese (s/n) para continuar: ");
        fflush(stdin);
        scanf("%c", &continuar);
    } while (continuar == 's');

    printf("Pila");
    mostrar(&p);

    while (!pilavacia(&p))
    {
        apilar(&aux1, desapilar(&p));
    }

    while (!pilavacia(&aux1))
    {
        apilar(&aux2, desapilar(&aux1));
    }

    while (!pilavacia(&aux2))
    {
        apilar(&p, desapilar(&aux2));
    }

    printf("Pila");
    mostrar(&p);

    /////////////////////////////////////// 06 ///////////////////////////////////////

    Pila dada, aux1, aux2;
    char continuar;
    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);

    do
    {
        leer(&dada);
        printf("Ingrese (s/n) para continuar: ");
        fflush(stdin);
        scanf("%c", &continuar);
    }

    while (continuar == 's');

    printf("Pila DADA");
    mostrar(&dada);

    apilar(&aux1, desapilar(&dada));

    while (!pilavacia(&dada))
    {
        apilar(&aux2, desapilar(&dada));
    }

    apilar(&dada, desapilar(&aux1));

    while (!pilavacia(&aux2))
    {
        apilar(&dada, desapilar(&aux2));
    }

    printf("Pila DADA");
    mostrar(&dada);

    /////////////////////////////////////// 07 ///////////////////////////////////////

    Pila pilita, paux1, paux2;
    char com;
    inicpila(&pilita);
    inicpila(&paux1);
    inicpila(&paux2);

    do
    {
        leer(&pilita);
        printf("Desea continuar ingresando datos? (S/N)\n");
        fflush(stdin);
        scanf("%c", &com);

    } while (com == 's');

    printf("Pilita: \n");
    mostrar(&pilita);

    while (!pilavacia(&pilita))
    {
        apilar(&paux1, desapilar(&pilita));
    }

    if (!pilavacia(&paux1))
    {
        apilar(&paux2, desapilar(&paux1));
    }

    while (!pilavacia(&paux1))
    {
        apilar(&pilita, desapilar(&paux1));
    }

    if (!pilavacia(&paux2))
    {
        apilar(&pilita, desapilar(&paux2));
    }

    printf("Pilita: \n");
    mostrar(&pilita);

    /////////////////////////////////////// 08 ///////////////////////////////////////

    Pila mazo, jugador1, jugador2;

    inicpila(&mazo);
    inicpila(&jugador1);
    inicpila(&jugador2);
    char com;

    do
    {
        leer(&mazo);
        printf("Desea continuar ingresando datos? (S/N)\n");
        fflush(stdin);
        scanf("%c", &com);
    } while (com == 's');

    printf("MAZO");
    mostrar(&mazo);

    while (!pilavacia(&mazo))
    {
        apilar(&jugador1, desapilar(&mazo));

        if (!pilavacia(&mazo))
        {
            apilar(&jugador2, desapilar(&mazo));
        }
    }

    printf("JUGADOR1");
    mostrar(&jugador1);

    printf("JUGADOR2");
    mostrar(&jugador2);

    /////////////////////////////////////// 09 ///////////////////////////////////////

    Pila a, b, aux;

    inicpila(&a);
    inicpila(&b);
    inicpila(&aux);
    char com;

    do
    {
        printf("Pila A\n");
        leer(&a);
        printf("Desea continuar ingresando datos? (S/N)\n");
        fflush(stdin);
        scanf("%c", &com);
    } while (com == 's');

    do
    {
        printf("Pila B\n");
        leer(&b);
        printf("Desea continuar ingresando datos? (S/N)\n");
        fflush(stdin);
        scanf("%c", &com);
    } while (com == 's');

    while (!pilavacia(&a) && !pilavacia(&b))
    {
        apilar(&aux, desapilar(&a));
        apilar(&aux, desapilar(&b));
    }

    if (pilavacia(&a) && pilavacia(&b))
    {
        printf("Las pilas tienen la misma cantidad de elementos.\n");
    }
    else
    {
        printf("Las pilas tienen diferentes cantidades de elementos.\n");
    }

    /////////////////////////////////////// 10 ///////////////////////////////////////

    char com;
    Pila a, b, aux1, aux2;

    inicpila(&a);
    inicpila(&b);
    inicpila(&aux1);
    inicpila(&aux2);

    printf("Cargado de la Pila A:\n\n");
    do
    {
        leer(&a);
        printf("\nDesea continuar ingresando datos? (S/N)\n");
        fflush(stdin);
        scanf("%c", &com);
        printf("\n");
    } while (com == 's');

    printf("\nCargado de la Pila B:\n\n");
    do
    {
        leer(&b);
        printf("\nDesea continuar ingresando datos? (S/N)\n");
        fflush(stdin);
        scanf("%c", &com);
        printf("\n");
    } while (com == 's');

    while (!pilavacia(&a) && !pilavacia(&b) && tope(&a) == tope(&b))
    {
        apilar(&aux1, desapilar(&a));
        apilar(&aux2, desapilar(&b));
    }

    if (pilavacia(&a) && pilavacia(&b))
    {
        printf("\nLas pilas son iguales\n");
    }
    else
    {
        printf("\nLas pilas son diferentes\n");
    }

    /////////////////////////////////////// 11 ///////////////////////////////////////

    int i;
    Pila modelo, dada, aux, trash;
    inicpila(&modelo);
    inicpila(&dada);
    inicpila(&aux);
    inicpila(&trash);

    srand(time(NULL));

    printf("\nCarga random en la pila MODELO\n");

    for (i = 0; i < 5; i++)
    {
        apilar(&modelo, (rand() % 10));
    }

    printf("\nMODELO\n");
    mostrar(&modelo);

    printf("\nCarga random en la pila DADA\n");

    for (i = 0; i < 5; i++)
    {
        apilar(&dada, (rand() % 10));
    }

    printf("\nDADA\n");
    mostrar(&dada);

    while (!pilavacia(&dada))
    {
        if (tope(&modelo) == tope(&dada))
        {

            apilar(&trash, desapilar(&dada));
        }
        else
        {
            apilar(&aux, desapilar(&dada));
        }
    }

    while (!pilavacia(&aux))
    {
        apilar(&dada, desapilar(&aux));
    }

    printf("\nSe eliminaron los elementos iguales al tope de MODELO\n");

    printf("\nDADA\n");
    mostrar(&dada);

    printf("\nElementos eliminados\n");

    printf("\nBASURA\n");
    mostrar(&trash);

    /////////////////////////////////////// 12 ///////////////////////////////////////

    int i;
    char com;
    Pila modelo, dada, aux, auxm, trash;
    inicpila(&modelo);
    inicpila(&dada);
    inicpila(&aux);
    inicpila(&trash);
    inicpila(&auxm);

    srand(time(NULL));

    printf("\nCarga de la pila MODELO\n\n");

    system("pause");
    system("cls");

    printf("\nDesea cargar datos? (S/N)\n");

    fflush(stdin);
    scanf("%c", &com);

    while (com == 's')
    {
        printf("\n");
        leer(&modelo);
        printf("\nDesea continuar ingresando datos? (S/N)\n");
        fflush(stdin);
        scanf("%c", &com);
    }

    system("cls");
    printf("\nMODELO\n");
    mostrar(&modelo);

    system("pause");
    system("cls");

    printf("\nCarga random en la pila DADA\n\n");
    system("pause");
    system("cls");

    for (i = 0; i < 5; i++)
    {
        apilar(&dada, (rand() % 10));
    }

    printf("\nDADA\n");
    mostrar(&dada);

    system("pause");
    system("cls");

    printf("\nSe van a eliminar los elementos de MODELO en DADA\n\n");
    system("pause");
    system("cls");

    while (!pilavacia(&modelo))
    {
        while (!pilavacia(&dada))
        {
            if (tope(&modelo) == tope(&dada))
            {
                apilar(&trash, desapilar(&dada));
            }
            else
            {
                apilar(&aux, desapilar(&dada));
            }
        }

        while (!pilavacia(&aux))
        {
            apilar(&dada, desapilar(&aux));
        }

        apilar(&auxm, desapilar(&modelo));
    }

    while (!pilavacia(&auxm))
    {
        apilar(&modelo, desapilar(&auxm));
    }

    if (!pilavacia(&modelo))
    {

        printf("\nMODELO\n");
        mostrar(&modelo);

        printf("\nDADA sin los elementos de MODELO\n");
        mostrar(&dada);

        printf("\nElementos eliminados de DADA\n");
        mostrar(&trash);
    }
    else
    {
        printf("\nNO se eliminaron elementos de DADA\n\n");
    }

    /////////////////////////////////////// 13 ///////////////////////////////////////

    int i;
    Pila limite, dada, men, may;

    inicpila(&limite);
    inicpila(&dada);
    inicpila(&men);
    inicpila(&may);

    srand(time(NULL));

    printf("Carga random en la pila LIMITE\n\n");
    system("pause");
    system("cls");

    for (i = 0; i < 10; i++)
    {
        apilar(&limite, (rand() % 10));
    }

    printf("\Pila LIMITE\n");
    mostrar(&limite);

    system("pause");
    system("cls");

    printf("Carga random en la pila DADA\n\n");

    system("pause");
    system("cls");

    for (i = 0; i < 10; i++)
    {
        apilar(&dada, (rand() % 10));
    }

    printf("Pila DADA\n");
    mostrar(&dada);

    system("pause");
    system("cls");

    printf("Se van a pasar los elementos de la pila DADA que sean mayores o iguales que el tope\nde LIMITE a la pila MAYORES, y los elementos que sean menores a la pila MENORES\n\n");

    system("pause");
    system("cls");

    while (!pilavacia(&dada))
    {
        if (tope(&dada) >= tope(&limite))
        {
            apilar(&may, desapilar(&dada));
        }
        else
        {
            apilar(&men, desapilar(&dada));
        }
    }

    printf("Pila MAYORES\n");
    mostrar(&may);

    printf("Pila MENORES\n");
    mostrar(&men);

    /////////////////////////////////////// 14 ///////////////////////////////////////

    char com;
    Pila dada, aux, par, impar;

    inicpila(&dada);
    inicpila(&aux);
    inicpila(&par);
    inicpila(&impar);

    printf("Carga de la pila DADA\n\n");
    system("pause");
    system("cls");

    do
    {
        leer(&dada);
        printf("Desea continuar ingresando datos? (S/N)\n");
        fflush(stdin);
        scanf("%c", &com);
    } while (com == 's');

    system("cls");

    printf("\Pila DADA\n");
    mostrar(&dada);

    system("pause");
    system("cls");

    printf("Se va a determinar si la Pila DADA es PAR o IMPAR\n\n");

    system("pause");
    system("cls");

    while (!pilavacia(&dada))
    {
        apilar(&aux, desapilar(&dada));

        if (!pilavacia(&dada))
        {
            apilar(&aux, desapilar(&dada));

            if (pilavacia(&dada))
            {
                apilar(&par, desapilar(&aux));
            }
        }
        else
        {
            apilar(&impar, desapilar(&aux));
        }
    }

    if (!pilavacia(&par))
    {
        printf("La Pila DADA tiene cantidad de elementos pares\n\n");
    }
    else if (!pilavacia(&impar))
    {
        printf("La Pila DADA tiene cantidad de elementos impares\n\n");
    }
    else
    {
        printf("La Pila DADA esta vacia\n\n");
    }

    /////////////////////////////////////// 17 ///////////////////////////////////////

    Pila Origen, Distinto;

    char com;
    inicpila(&Origen);
    inicpila(&Distinto);

    printf("Se realizara la carga de datos en ORIGEN\n\n");
    system("pause");
    system("cls");

    do
    {
        printf("\n");
        leer(&Origen);
        printf("\nDesea continuar ingresando datos? (S/N)\n");
        fflush(stdin);
        scanf("%c", &com);
    } while (com == 's');

    system("cls");

    printf("ORIGEN\n");
    mostrar(&Origen);

    system("pause");
    system("cls");

    printf("Se pasaran a la pila DISTINTO todos aquellos elementos que preceden el valor 5\n\n");
    system("pause");
    system("cls");

    while (!pilavacia(&Origen) && (tope(&Origen) < 5))
    {
        apilar(&Distinto, desapilar(&Origen));
    }

    printf("DISTINTO\n");
    mostrar(&Distinto);

    return 0;
}