#ifndef STACK_H
#define STACK_H

typedef struct {
    int left;
    int right;
} StackItem;

typedef struct {
    StackItem* items;
    int top;
    int capacity;
} t_stack;

t_stack* createStack(int size);
void push(t_stack* stack, int left, int right);
StackItem pop(t_stack* stack);
int isEmpty(t_stack* stack);
void freeStack(t_stack* stack);

#endif