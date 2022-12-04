// algoririmo implementado = Linear Search - Pesquisa Linear

//biblioteca
#include <stdio.h>
 
int main()
{
   int array[100], search, c, n, count = 0; // Cria a váriavel array de tamanho 100 e outras variaveis de controle
   
   printf("Escreva a quantidade de elementos no array\n"); // printa comando na tela
   scanf("%d", &n);
   
   printf("Escreva %d numeros\n", n); // printa a quantidade de elementos escolhida pelo usuário
   
   for (c = 0; c < n; c++) // estrutura de repetição para ler todos os valores inseridos e atribui-los no array
      scanf("%d", &array[c]);
     
   printf("Escreva o numero que deseja buscar\n"); // printa comando de escolha para o usuario
   scanf("%d", &search);
   
   for (c = 0; c < n; c++) { // estrutura de repetição para ler todos os valores do array
      if (array[c] == search) { // buscar se o valor esta presente no array
         printf("%d esta presente na posicao %d.\n", search, c+1); //se estiver presente, print na tela o valor e sua posição
         count++; // soma 1 valor no contador de vezes que apareceu no array
      }
   }
   if (count == 0) // se não houver soma no contador, não tem o número no array
      printf("%d nao esta presente no array.\n", search); // printa na tela que o número não está presente no array
   else
      printf("%d está presente %d vezes no array.\n", search, count); // printa na tela a quantidade de vezes que apareceu e suas posições 
     
   return 0;
}
