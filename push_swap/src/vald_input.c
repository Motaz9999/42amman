#include "push_swap.h"
//here we make the stack btw i want to added to the last one (7 8 10) be like 7(top) then 7top,8,10(last)
//
t_node *valdtion_and_dup(int argc, char argv[])
{
    int i;
    t_node *stack_a;
    i = 1;//we dont need file name
    if (argc < 2)//check argc
    return NULL;
    //cheack for dup and vald
    while(argv[i])
    {
        if (!check_for_input(argv[i]))
        error_happend(&stack_a);
        add_back(&stack_a, create_node(argv[i]));//here we add new node 
        i++;
    }
    check_for_dup(&stack_a);// if u found dup just del the node then free it
}
void check_for_dup(t_node )