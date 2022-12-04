// algoririmo implementado = Selection sort - Ordenação por seleção

//biblioteca
#include <stdio.h>

 
void swap(int *xp, int *yp) // Função que cria ponteiros para realizar a troca 
{
    int temp = *xp; 
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n) 
{
    int i, j, min_idx;
 
    // Percorre todo o subconjunto de números aleatórios
    for (i = 0; i < n-1; i++) 
    {
        
        min_idx = i; // Encontra o menor elemento no conjunto desordenado
        for (j = i+1; j < n; j++) // estrutura para percorrer o array
          if (arr[j] < arr[min_idx]) // se o array na posição j for menor que o minimo, j se torna o minimo
            min_idx = j; 
 
        // Verifica se o valor é menor que o outro
           if(min_idx != i) 
            swap(&arr[min_idx], &arr[i]); // chama função para realizar a troca, função swap
    }
}
 

void printArray(int arr[], int size) // Função que imprime o Array
{
    int i;
    for (i=0; i < size; i++) // estrutura para perocrrer o array para printa-lo na tela 
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Sistema para rodar o código 
int main() 
{
    int arr[] = {64, 25, 12, 28, 11, 87, 98, 365, -10, -28, 60, 46, 10, -86, 32}; // atribuindo valor para as posições
    int n = sizeof(arr)/sizeof(arr[0]); // cria a váriavel n, para ter o controle de memória em bytes
    selectionSort(arr, n); // chama a função para ordenar o array, passando os parâmentros tamanho e memória necessaria
    printf("Array ordenado: \n"); 
    printArray(arr, n); // printa na tela o array ordenado
    return 0;
}
