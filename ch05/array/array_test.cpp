#include <iostream>
#include <array>
#include <string>

int main()
{
    std::array<int, 3> a1 { {1, 2, 3} };
    std::array<int, 3> a3 { {4, 5, 6} };
    std::array<std::string, 3> a2{ {"test1", "test2", "test3"} };

    std::cout << a1.at(0) << " " << a1[1] << " " << a1[2] << "\n";
    std::cout << a2.at(0) << " " << a2[1] << " " << a2[2] << "\n";
    std::cout << a3.at(0) << " " << a3[1] << " " << a3[2] << "\n";

    swap(a1, a3);

    std::cout << a1.at(0) << " " << a1[1] << " " << a1[2] << "\n";
    std::cout << a2.at(0) << " " << a2[1] << " " << a2[2] << "\n";
    std::cout << a3.at(0) << " " << a3[1] << " " << a3[2] << "\n";

    //test a thrown exception:
    std::cout << a3.at(4);

    return (0);
}

