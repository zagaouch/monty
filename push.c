#include "monty.h"

/**
 * push - function to push an element onto the stack
 * @value : the value to add
*/
void push(int value) {
    if (top == STACK_SIZE - 1) {
        fprintf(stderr, "Stack overflow: push failed\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = value;
}