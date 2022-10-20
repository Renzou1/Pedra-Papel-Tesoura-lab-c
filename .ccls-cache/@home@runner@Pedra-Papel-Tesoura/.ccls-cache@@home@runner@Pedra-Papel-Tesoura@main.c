#include <stdio.h>
#include<time.h>

int main(){

  int escolha, a;
  
  printf("Escolha \n0. Pedra\n1. Papel\n2. Tesoura\n");
  scanf("%d", &escolha);
  while (escolha < 0 || escolha > 2){
      printf("Escolha inválida, tente novamente \n0. Pedra\n1. Papel\n2. Tesoura\n");
      scanf("%d", &escolha);
  }
  
  srand(time(NULL));
  a = rand() % 3;
  
  // 0 = pedra, 1 = papel, 2 = tesoura.
  
  if (a == 0)
    if (escolha == 0)
      printf ("Computador escolheu pedra, empate.");
      else if (escolha == 1)
        printf ("Computador escolheu pedra, você venceu");
          else if (escolha == 2)
              printf("Computador escolheu pedra, você perdeu");
  
if (a == 1)
    if (escolha == 0)
      printf ("Computador escolheu papel, você perdeu");
      else if (escolha == 1)
        printf ("Computador escolheu papel, empate");
          else if (escolha == 2)
            printf ("Computador escolheu papel, você venceu");
  if (a == 2)
    if (escolha == 0)
      printf ("Computador escolheu tesoura, você venceu");
      else if (escolha == 1)
        printf ("Computador escolheu tesoura, você perdeu");
          else if (escolha == 2)
              printf("Computador escolheu tesoura, empate");

  






}