#include "monty.h"
/**
 * pall - Function to print all values on the stack
*/
void pall(void)
{
	int i;

	for (i = top; i >= 0; i--)
	{
		printf("%d\n", stack[i]);
	}
}
