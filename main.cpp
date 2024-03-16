#include <cstdio>

int ignore;

void lerOperandos(double* operando1, double* operando2) {
  printf("Informe o primeiro operando: ");
  ignore = scanf("%lf", operando1);
  printf("Informe o segundo operando: ");
  ignore = scanf("%lf", operando2);
}

int main() {
  printf("## Calculadora aritimética básica ##\n");
  char operacao;
  double op1, op2;
  while(true) {
    printf("Operações disponíveis:\n");
    printf("+ : Soma\n");
    printf("- : Subtração\n");
    printf("* : Multiplicação\n");
    printf("/ : Divisão\n");
    printf("%% : Resto da divisão de inteiros\n");
    printf("q : Sair\n");
    printf("Escola a operação matemática desejada: ");
    ignore = scanf("%c", &operacao);
    if(operacao == 'q') {
      break;
    } else if(operacao == '+') {
      lerOperandos(&op1, &op2);
      printf("%.2f + %.2f = %.2f\n", op1, op2, op1 + op2);
    } else if(operacao == '-') {
      lerOperandos(&op1, &op2);
      printf("%.2f - %.2f = %.2f\n", op1, op2, op1 - op2);
    } else if(operacao == '*') {
      lerOperandos(&op1, &op2);
      printf("%.2f * %.2f = %.2f\n", op1, op2, op1 * op2);
    } else if(operacao == '/') {
      lerOperandos(&op1, &op2);
      printf("%.2f / %.2f = %.2f\n", op1, op2, op1 / op2);
    } else if(operacao == '%') {
      lerOperandos(&op1, &op2);
      printf("%d %% %d = %d\n", (int) op1, (int) op2, (int) op1 % (int) op2);
    } else {
      printf("Operação inválida");
    }
    printf("\n");
  }
  return 0;
}
