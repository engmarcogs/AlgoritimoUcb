#include<stdio.h>

int main() {
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, resultado;

     do
     {  
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
        printf("Digite o terceiro numero: ");
        scanf("%d", &num3);
        printf("Digite o quarto numero: ");
        scanf("%d", &num4);
        printf("Digite o quinto numero: ");
        scanf("%d", &num5);
        printf("Digite o sexto numero: ");
        scanf("%d", &num6);
        printf("Digite o setimo numero: ");
        scanf("%d", &num7);
        printf("Digite o oitavo numero: ");
        scanf("%d", &num8);
        printf("Digite o nono numero: ");
        scanf("%d", &num9);
        printf("Digite o decimo numero: ");
        scanf("%d", &num10);

        resultado = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10;

        printf("Resultado: %d", resultado);
     } while (num1, num2, num3, num4, num5, num6, num7, num8, num9, num10 == 0 || num1, num2, num3, num4, num5, num6, num7, num8, num9, num10 < 0);    
}