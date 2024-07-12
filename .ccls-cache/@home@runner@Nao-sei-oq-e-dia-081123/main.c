#include <stdio.h>

int main() {
  char nome[50];
  int opcao;
  float resultado;
  int continuar = 1; // Variável para controlar o loop

  printf("Seja bem vindo à minha calculadora!\n");
  printf("Qual é o seu nome?: ");
  scanf("%s", nome);

  while (continuar) { // Loop principal

    printf("\nOpções:\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      printf("Vamos somar!\n");
      float soma = 0;
      int quantidade_numeros;

      printf("Quantos números você deseja somar? ");
      scanf("%d", &quantidade_numeros);

      for (int i = 0; i < quantidade_numeros; i++) {
        float numero;
        printf("Insira o próximo número: ");
        scanf("%f", &numero);
        soma += numero;
      }

      printf("Resultado da soma: %.1f\n", soma);
      break;

    case 2:
      printf("Vamos subtrair!\n");
      float subtracao = 0;

      printf("Quantos números você deseja subtrair? ");
      scanf("%d", &quantidade_numeros);

      if (quantidade_numeros >= 2) {
        printf("Insira o primeiro número: ");
        scanf("%f", &subtracao);

        for (int i = 1; i < quantidade_numeros; i++) {
          float numero;
          printf("Insira o próximo número: ");
          scanf("%f", &numero);
          subtracao -= numero;
        }

        printf("Resultado da subtração: %.1f\n", subtracao);
      } else {
        printf("Erro: É necessário pelo menos dois números para subtrair.\n");
      }
      break;

    case 3:
      printf("Vamos multiplicar!\n");
      float multiplicacao = 1;

      printf("Quantos números você deseja multiplicar? ");
      scanf("%d", &quantidade_numeros);

      for (int i = 0; i < quantidade_numeros; i++) {
        float numero;
        printf("Insira o próximo número: ");
        scanf("%f", &numero);
        multiplicacao *= numero;
      }

      printf("Resultado da multiplicação: %.1f\n", multiplicacao);
      break;

    case 4:
      printf("Vamos dividir!\n");
      float divisao;

      printf("Quantos números você deseja dividir? ");
      scanf("%d", &quantidade_numeros);

      if (quantidade_numeros >= 2) {
        printf("Insira o primeiro número: ");
        scanf("%f", &divisao);

        int divisor_valido = 1; // Variável para verificar divisão por zero

        for (int i = 1; i < quantidade_numeros; i++) {
          float numero;
          printf("Insira o próximo número: ");
          scanf("%f", &numero);

          if (numero == 0) {
            printf("Erro: Divisão por zero!\n");
            divisor_valido = 0;
            break;
          }

          divisao /= numero;
        }

        if (divisor_valido) {
          printf("Resultado da divisão: %.1f\n", divisao);
        }
      } else {
        printf("Erro: É necessário pelo menos dois números para dividir.\n");
      }
      break;

    case 0:
      continuar = 0; // Sair do loop
      break;

    default:
      printf("Opção inválida. Tente novamente.\n");
      break;
    }
  }

  printf("Obrigado por usar a calculadora, %s!\n", nome);

  return 0;
}