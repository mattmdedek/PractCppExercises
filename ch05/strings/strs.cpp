#include <iostream>
#include <string>

int main()
{
    std::string str_a ("str_a");
    std::string str_b ("str_b");

    std::cout << "***Testing string swap***\n";

    std::cout << "Before swap: A = " << str_a << ", B = " << str_b << "\n";

    swap (str_a, str_b);

    std::cout << "After swap:  A = " << str_a << ", B = " << str_b << "\n";

    std::cout << "Same with +: A = " + str_a + ", B = " + str_b + "\n";


    std::cout << "***Testing substring***\n";
}
