#include <stdio.h>
#include <math.h>

int main() {
    double angulo, tangente;

    printf("Ingrese el angulo en radianes: ");
    scanf("%lf", &angulo);

    tangente = tan(angulo);

    printf("La tangente de %.2f radianes es %.2f\n", angulo, tangente);

    return 0;
}
