#include <stdio.h>
#include "stack.h"
#include "quicksort.h"

// Função auxiliar para troca
void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Função auxiliar para divirdir array
int partition(int arr[], int left, int right) {
  int pivot = arr[right];
  int i = left - 1;

  for (int j = left; j < right; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[right]);
  return i + 1;
}

void quicksort(int arr[], int size) {
  t_stack* stack = createStack(size);

  push(stack, 0, size - 1);

  while (!isEmpty(stack)) {
    StackItem item = pop(stack);
    int left = item.left;
    int right = item.right;

    if (left < right) {
      int pivotIndex = partition(arr, left, right);
      push(stack, left, pivotIndex - 1);
      push(stack, pivotIndex + 1, right);
    }
  }

  freeStack(stack);
}
