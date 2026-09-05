#include <stdio.h>
int main()
{
    int num1, num2, temp;
    printf("Digite o primeiro número:");
    scanf("%d", &num1);
    printf("\nDigite o segundo número:");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nValores trocados: \nnum1 = %d \nnum2 = %d\n", num1, num2);
    return 0;
}
