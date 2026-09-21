/*
 * Aluno: Joaquim
 * Exercicio: 04
 * Descricao: Escreva um programa em C que simule o algoritmo de uma "fila de banco". O
programa deve perguntar quantas pessoas estão na fila e, em seguida,
"chamar" cada uma, exibindo "Senha 1", "Senha 2", ...
 * Data: 21/09/2026
 */

#include <stdio.h>

int main() {
    int pessoas;

    printf("Quantas pessoas estao na fila? ");
    scanf("%d", &pessoas);

    for (int i = 1; i <= pessoas; i++) {
        printf("Senha %d\n", i);
    }

    return 0;
}