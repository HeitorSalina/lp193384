/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2758
Data        : 09/04/2026
Nome        : Heitor Felipe de Goes Salina
Objetivo    : Entrada e saída de números inteiros.
Aprendizado : Diversas maneiras de saídas para números inteiros.
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    printf("A = %d, B = %d, C = %d\n", A, B, C);
    printf("A = %10d, B = %10d, C = %10d\n", A, B, C);
    printf("A = %010d, B = %010d, C = %010d\n", A, B, C);
    printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);

    return 0;
}
