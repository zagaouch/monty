#include "monty.h"
/**
 * main - the main fucntion
 * Return: 0
*/
int main(void)
{
    char opcode[5];
    int value;

    while (scanf("%s", opcode) == 1)
    {
        if (strcmp(opcode, "push") == 0)
        {
            if (scanf("%d", &value) != 1)
            {
                fprintf(stderr, "L%d: usage: push integer\n", __LINE__);
                exit(EXIT_FAILURE);
            }
            push(value);
        } else if (strcmp(opcode, "pall") == 0)
        {
            pall();
        }
        else
        {
            fprintf(stderr, "Invalid opcode: %s\n", opcode);
            exit(EXIT_FAILURE);
        }
    }

    return (0);
}