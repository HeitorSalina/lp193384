/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2758
Data        : 09/04/2026
Nome        : Heitor Felipe de Goes Salina
Objetivo    : Entrada e saída de números reais.
Aprendizado : Aprender diversos tipos de saídas para números reais.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    float A, B;
    double C, D;

    scanf("%f %f", &A, &B);
    scanf("%lf %lf", &C, &D);

    printf("A = %f, B = %f\n", A, B);
    printf("C = %lf, D = %lf\n", C, D);
    printf("A = %.1f, B = %.1f\n", A, B);
    printf("C = %.1lf, D = %.1lf\n", C, D);
    printf("A = %.2f, B = %.2f\n", A, B);
    printf("C = %.2lf, D = %.2lf\n", C, D);
    printf("A = %.3f, B = %.3f\n", A, B);
    printf("C = %.3lf, D = %.3lf\n", C, D);
    printf("A = %.3E, B = %.3E\n", A, B);
    printf("C = %.3E, D = %.3E\n", C, D);
    printf("A = %.0f, B = %.0f\n", A, B);
    printf("C = %.0lf, D = %.0lf\n", C, D);

    return 0;
}
