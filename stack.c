#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

t_stack* createStack(int size) {
  t_stack* stack = (t_stack*)malloc(sizeof(t_stack));
  stack->items = (StackItem*)malloc(size * sizeof(StackItem));
  stack->top = -1;
  stack->capacity = size;
  return stack;
}

void push(t_stack* stack, int left, int right) {
  stack->top++;
  stack->items[stack->top].left = left;
  stack->items[stack->top].right = right;
}

StackItem pop(t_stack* stack) {
  StackItem item = stack->items[stack->top];
  stack->top--;
  return item;
}

int isEmpty(t_stack* stack) {
  return stack->top == -1;
}

void freeStack(t_stack* stack) {
  free(stack->items);
  free(stack);
}