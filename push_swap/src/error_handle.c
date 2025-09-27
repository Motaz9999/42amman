#include "push_swap.h"

void error_happend(t_node **stack)
{
    write(2,"Error/n",6);
    free_stack(stack);
    exit(1);
}