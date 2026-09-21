    /*
    * Aluno: Joaquim
    * Exercicio: 01
    * Descricao: Dada a sequência: 1, 1, 2, 3, 5, 8, 13... Crie um programa em C que leia um
número N e imprima os primeiros N termos dessa sequência, identificando o
padrão de repetição.
    * Data: 21/09/2026
     */

 #include <stdio.h>

int main() {

    int n;
    int anterior = 1;
    int atual = 1;
    int proximo;

    printf("Digite quantos termos deseja ver: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i + 1){
        printf("%d ", anterior);
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    };
    return 0;
}