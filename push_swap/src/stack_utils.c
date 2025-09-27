#include "push_swap.h"
t_node *create_node (int val)
{
    t_node *node;
    node = (t_node *) malloc(sizeof(t_node));
    if (!node)
    {
        return NULL;
    }
    node->value = val;
    node->index = -1;//we edit later
    node->next = NULL;//it depends on the stack
    return node;
}
void push(t_node **stack, t_node *new_node)
{
    if (!new_node)
    return;
    new_node->next = (*stack);//first elme
    *stack = new_node;
}
int get_stack_size(t_node *stack)
{
    int count;
    count = 0;
    while(stack)
    {
        stack = stack->next;
        count++;
    }
    return count;
}
void free_stack(t_node **stack)
{
    t_node *temp;
    t_node *current;
    
    if(!stack)
    return NULL;
    current = *stack;
    while(current)
    {
        temp = current;
        current = current->next;
        free(temp);
    }
    *stack = NULL;
}
void add_back(t_node **stack, t_node *new_node)
{
    if (!new_node || !new_node)
    return;
    if (*stack == NULL)
    {
        *stack = new_node;
        return;
    }
    t_node *last_node;
    last_node = *stack;
    while(last_node->next == NULL)
    {
        last_node = last_node->next;
    }
    last_node->next = new_node;
}
