#include <iostream>

int main()
{
    int choice;
    std::cout << "Enter a number between 1 and 50\n";
    std::cin >> choice;

    if(choice < 0) {
        std::cout << choice << " is a negative number\n";
    } else if(choice > 0) {
        std::cout << choice << " is a positive number\n";
    } else {
        std::cout << "WTF you want me do with " << choice << "?\n";
    }
}

