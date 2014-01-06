#include <cassert>
#include <cstdlib>
#include <iostream>

const int STACK_SIZE = 100;

struct stack {
    int count;
    int data[STACK_SIZE];
};

inline void stack_init(struct stack& the_stack){
    the_stack.count = 0;
}

inline void stack_push(struct stack& the_stack, const int item){
    assert((the_stack.count < STACK_SIZE) && (the_stack.count >= 0));
    the_stack.data[the_stack.count] = item;
    ++the_stack.count;
}

inline int stack_pop(struct stack& the_stack){
    --the_stack.count;
    assert((the_stack.count < STACK_SIZE) && (the_stack.count >= 0));
    return(the_stack.data[the_stack.count]);
}

int main()
{
    struct stack a_stack;
    stack_init(a_stack);
    std::cout << "Empty stack size: " << a_stack.count << "\n";

    for(int i = 1; i < 10; i++){
        std::cout << "Pushing " << i << "\n";
        stack_push(a_stack, i);
    }
    std::cout << "Post additions size: " << a_stack.count << "\n";

    for(int i = 1; i < 10; i++){
        std::cout << "Popped " << stack_pop(a_stack) << "\n";
    }
    std::cout << "Post popping size: " << a_stack.count << "\n";
}

