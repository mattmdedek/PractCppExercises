#include <iostream>

int main()
{
    char entry;
    std::cout << "Enter a character\n";
    std::cin >> entry;

    switch (entry) {
        case 'a':
        case 'A':
            std::cout << "You are a good student\n";
            break;
        case 'f':
        case 'F':
            std::cout << "Fail\n";
            break;
        default:
            std::cout << "I can't do anything with " << entry << "\n";
            break;
    }
    return (0);
}

