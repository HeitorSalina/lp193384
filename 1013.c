/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2758
Data        : 08/04/2026
Nome        : Heitor Felipe de Goes Salina
Objetivo    : Escrever o maior entre 3 números.
Aprendizado : Achar o maior número entre 3.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, maiorAB, maior;
    scanf("%d %d %d", &a, &b, &c);
    maiorAB = (a + b + abs(a - b)) / 2;
    maior = (maiorAB + c + abs(maiorAB - c)) / 2;
    printf("%d eh o maior\n", maior);
    return 0;
}
