#include <stdio.h>

int main()
{
    int priValor, segValor, x, y;

    printf("##############################\n");
    printf("Bem-vindo, Tabuada em C\n\n");

    printf("Digite o Primeiro Valor: ");
    scanf("%d", &segValor);

    printf("Digite o Segundo Valor: ");
    scanf("%d", &priValor);

    printf("Valores %d e %d", priValor, segValor);
    printf("\n\nTABUADA:\n");

    for (x; x <= priValor; x++) {
        printf("%d X %d = %d\n", segValor, x, x * priValor);
    };
    main();

    return 0;
}
