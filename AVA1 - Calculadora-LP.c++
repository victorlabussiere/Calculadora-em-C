#include <stdio.h>
int main(void)
{
    float a = 0, b = 0, resultado = 0;
    int op;
    do
    {
        printf("\n\t1 - Digite 1 para SOMAR\n\t2 - Digite 2 para SUBTRAIR\n\t3 - Digite 3 para MULTIPLICAR\n\t4 - Digite 4 para DIVIDIR\n ");
        scanf("%i", &op);
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &a);
        printf("\nDigite o segundo numero: ");
        scanf("%f", &b);
         switch (op)
    	{
    	case 1:
        	resultado = a + b;
			break;
    	case 2:
        	resultado = a - b; 
			break;
    	case 3:
	        resultado = a * b; 
			break;
    	case 4:
        	resultado = a / b; 
			break;
    	default:
        	printf("\n Digite um numero valido.\n");
   		}
    printf("\n\t Resultado: %0.2f", resultado);
    printf("\n Digite 1 se deseja continuar? (1 para sim, 2 para encerrar.): ");
    scanf("%i", &op);
    } while (op == 1);
}
