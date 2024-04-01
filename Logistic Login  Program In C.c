
#include <stdio.h>
#include <ctype.h>

int main()
{
  int i, j, x, y, n, v;
  char u;

  printf("Exemplo login logistca em 'C'\n");
  printf("Digite o seu usuário : ");
  scanf("%s", &u);
  printf("Digite a sua senha : ");
  scanf("%e", &n);
  printf("Escolha uma opcao \n 1.expedição \n 2.recebimento \n 3.picking \n 4.armazenamento \n 5.inventario \n");
  scanf("%d", &v);

  switch (v)
  {
  case 1:
    printf("Expedição\n");
    break;

  case 2:
    printf("Recebimento\n");
    break;

  case 3:
    printf("picking\n");
    break;

  case 4:
    printf("armazenamento\n");

    break;

  case 5:
    printf("inventario\n");
    break;

  default:
  printf ("opcao invalida");
  }
}
