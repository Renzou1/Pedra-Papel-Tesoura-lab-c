#include <stdio.h>
#include<time.h>

int main(){

  int escolha, a;
  char novamente;
  
do{ 
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
                printf("Computador escolheu papel, você venceu");
                else if (escolha == 4)
                 printf("Computador escolheu papel, você perdeu");
  
  if (a == 2) // tesoura
    if (escolha == 0)
      printf ("Computador escolheu tesoura, você venceu");
      else if (escolha == 1)
        printf ("Computador escolheu tesoura, você perdeu");
          else if (escolha == 2)
              printf("Computador escolheu tesoura, empate");
                else if (escolha == 3)
                  printf("Computador escolheu tesoura, você perdeu");
                  else if (escolha == 4)
                    printf("Computador escolheu tesoura, você venceu");

  if (a == 3) // lagarto
    if (escolha == 0)
      printf ("Computador escolheu lagarto, você venceu");
      else if (escolha == 1)
        printf ("Computador escolheu lagarto, você perdeu");
          else if (escolha == 2)
              printf("Computador escolheu lagarto, você perdeu");
                else if (escolha == 3)
                  printf("Computador escolheu lagarto, empate");
                  else if (escolha == 4)
                    printf("Computador escolheu lagarto, você venceu");

  if (a == 4) // spock
    if (escolha == 0)
      printf ("Computador escolheu Spock, você perdeu");
      else if (escolha == 1)
        printf ("Computador escolheu Spock, você venceu");
          else if (escolha == 2)
              printf("Computador escolheu Spock, você perdeu");
                else if (escolha == 3)
                  printf("Computador escolheu Spock, você perdeu");
                  else if (escolha == 4)
                    printf("Computador escolheu Spock, empate");

printf ("\nJogar novamente? (S/N)\n");
scanf (" %c", &novamente);

   }while (novamente == 'S');






}