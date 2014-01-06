#include <cassert>
#include <cstdlib>
#include <iostream>

const int STACK_SIZE = 100;

class stack {
    private:
        int count;
        int data[STACK_SIZE];
    public:
        stack();
        ~stack();
        void push(const int item);
        int pop();
};

inline stack::stack(){
    count = 0;
}

inline stack::~stack(){
    if(count != 0){
        std::cerr << "Destroying non-empty class";
    }
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

    for(int i = 1; i < 10; i++){
        std::cout << "Pushing " << i << "\n";
        a_stack.push(i);
    }

    for(int i = 1; i < 10; i++){
        std::cout << "Popped " << a_stack.pop() << "\n";
    }
}

