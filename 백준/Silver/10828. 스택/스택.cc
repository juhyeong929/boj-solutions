#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 10000

typedef struct {
    int data[MAX_STACK_SIZE];
    int top;
} Stack;

void init(Stack *s) {
    s->top = -1;
}

int empty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int x) {
    if (s->top < MAX_STACK_SIZE - 1) {
        s->data[++(s->top)] = x;
    }
}

int pop(Stack *s) {
    if (empty(s)) {
        return -1;
    } else {
        return s->data[(s->top)--];
    }
}

int size(Stack *s) {
    return s->top + 1;
}

int top(Stack *s) {
    if (empty(s)) {
        return -1;
    } else {
        return s->data[s->top];
    }
}

int main() {
    Stack myStack;
    init(&myStack);

    int N;
    scanf("%d", &N);

    char command[10];
    int value;

    for (int i = 0; i < N; i++) {
        scanf("%s", command);

        if (strcmp(command, "push") == 0) {
            scanf("%d", &value);
            push(&myStack, value);
        } else if (strcmp(command, "pop") == 0) {
            printf("%d\n", pop(&myStack));
        } else if (strcmp(command, "size") == 0) {
            printf("%d\n", size(&myStack));
        } else if (strcmp(command, "empty") == 0) {
            printf("%d\n", empty(&myStack));
        } else if (strcmp(command, "top") == 0) {
            printf("%d\n", top(&myStack));
        }
    }

    return 0;
}