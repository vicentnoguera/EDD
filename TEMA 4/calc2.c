#include <stdio.h>

int suma(int a, int b)
{
    return a + b;
}

int resta(int a, int b)
{
    return a - b;
}

int multiplicacio(int a, int b)
{
    return a * b;
}

int divisio(int a , int b)
{
    return a / b;
}



int main ()
{
    int a, b;

    printf("introduce los 2 operandos: ");
    scanf("%d %d", &a, &b);
    printf("La suma entre %d  y %d es: %d\n" ,a,b,suma(a, b));
    printf("La resta entre %d  y %d es: %d\n" ,a,b,resta(a, b));
    printf("La multiplicació entre %d  y %d es: %d\n" ,a,b,multiplicacio(a, b));
    printf("La divisió entre %d  y %d es: %d\n" ,a,b,divisio(a, b));
}
