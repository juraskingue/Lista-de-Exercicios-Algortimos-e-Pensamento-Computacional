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