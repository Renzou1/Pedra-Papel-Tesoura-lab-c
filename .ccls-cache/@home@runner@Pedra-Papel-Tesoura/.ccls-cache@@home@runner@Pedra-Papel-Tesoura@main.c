#include <stdio.h>
#include<time.h>

int main(){

  int escolha, a;
  
  printf("Escolha \n0. Pedra\n1. Papel\n2. Tesoura\n3. Lagarto\n4. Spock\n");
  scanf("%d", &escolha);
  
  srand(time(NULL));
  a = rand() % 5;
  
  // 0 = pedra, 1 = papel, 2 = tesoura, 3 = lagarto, 4 = spock
  
  if (a == 0) // pedra
    if (escolha == 0)
      printf ("Computador escolheu pedra, empate.");
      else if (escolha == 1)
        printf ("Computador escolheu pedra, você venceu");
          else if (escolha == 2)
              printf("Computador escolheu pedra, você perdeu");
                else if (escolha == 3)
                  printf("Computador escolheu pedra, você perdeu");
                  else if (escolha == 4)
                    printf("Computador escolheu pedra, você venceu");
  
if (a == 1) // papel
    if (escolha == 0)
      printf ("Computador escolheu papel, você perdeu");
      else if (escolha == 1)
        printf ("Computador escolheu papel, empate");
          else if (escolha == 2)
            printf ("Computador escolheu papel, você venceu");
              else if (escolha == 3)
                printf("Computador escolheu pedra, ");
                else if (escolha == 4)
                 printf("Computador escolheu pedra, ");
  
  if (a == 2) // tesoura
    if (escolha == 0)
      printf ("Computador escolheu tesoura, você venceu");
      else if (escolha == 1)
        printf ("Computador escolheu tesoura, você perdeu");
          else if (escolha == 2)
              printf("Computador escolheu tesoura, empate");
                else if (escolha == 3)
                  printf("Computador escolheu tesoura, ");
                  else if (escolha == 4)
                    printf("Computador escolheu tesoura, ");

  if (a == 3) // lagarto
    if (escolha == 0)
      printf ("Computador escolheu lagarto");
      else if (escolha == 1)
        printf ("Computador escolheu lagarto");
          else if (escolha == 2)
              printf("Computador escolheu lagarto");
                else if (escolha == 3)
                  printf("Computador escolheu lagarto, ");
                  else if (escolha == 4)
                    printf("Computador escolheu lagarto, ");

  if (a == 4) // spock
    if (escolha == 0)
      printf ("Computador escolheu Spock,");
      else if (escolha == 1)
        printf ("Computador escolheu Spock,");
          else if (escolha == 2)
              printf("Computador escolheu Spock,");
                else if (escolha == 3)
                  printf("Computador escolheu Spock, ");
                  else if (escolha == 4)
                    printf("Computador escolheu Spock, ");






}