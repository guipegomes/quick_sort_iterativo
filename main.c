#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

int main() {
  int n;
  scanf("%d", &n);

  int* arr = (int*)malloc(n * sizeof(int));
  if (arr == NULL) {
    printf("Não foi possível alocar memória para o array.\n");
    return 1;
  }

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  quicksort(arr, n);

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  free(arr);
  return 0;
}