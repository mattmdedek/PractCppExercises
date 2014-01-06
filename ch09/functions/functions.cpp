#include <cassert>
#include <iostream>

int main()
{
    void say_shit(int& counter);
    int i = 0;

    while(i < 4){
        say_shit(i);
    }

    return(0);
}

void say_shit(int& counter)
{
    counter++;
    if(counter == 3){
        std::cout << "Fuck!\n";
    } else {
        std::cout << "Shit!\n";
    }
}

