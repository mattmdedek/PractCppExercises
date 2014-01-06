#include <cassert>
#include <cstdlib>
#include <iostream>

const int STACK_SIZE = 100;

class stack {
    private:
        int count;
        int data[STACK_SIZE];
    public:
        void init();
        void push(const int item);
        int pop();
};

inline void stack::init(){
    count = 0;
}

inline void stack::push(const int item){
    assert((count < STACK_SIZE) && (count >= 0));
    data[count] = item;
    ++count;
}

inline int stack::pop(){
    --count;
    assert((count < STACK_SIZE) && (count >= 0));
    return(data[count]);
}

int main()
{
    stack a_stack;
    a_stack.init();

    for(int i = 1; i < 10; i++){
        std::cout << "Pushing " << i << "\n";
        a_stack.push(i);
    }

    for(int i = 1; i < 10; i++){
        std::cout << "Popped " << a_stack.pop() << "\n";
    }
}

