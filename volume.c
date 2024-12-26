#include <stdio.h>
#include <string.h>

int opcao;
float medida, conversao;

int main()
{
    
    do
    {
        printf("\nBem-vindo ao conversor de unidades de volume!\n\n");
        printf("(1)Metro cubico para centimetro cubico\n");
        printf("(2)Centimetro cubico para metro cubico\n");
        printf("(3)Encerrar o programa\n\n");
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);

        switch(opcao){

            case 1:
              printf("\n\nDigite o valor em metros cubicos: ");
              scanf("%f", &medida);
              conversao = medida*1000000;
              printf("O valor da medida em centrimetros cubicos, eh: %lf",conversao);
              break;
            
            case 2:
              printf("\n\nDigite o valor em centimetro cubicos: ");
              scanf("%f", &medida);
              conversao = medida/1000000.0f;
              printf("O valor da medida em centimetros cubicos, eh: %.8f", conversao);
              break;

            case 3:
              printf("Muito obrigado por utilizar a aplicacao!");
              break;
        }
    } while(opcao != 3);
    
    return 0;
}
