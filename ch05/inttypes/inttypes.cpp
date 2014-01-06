#include <iostream>

int main()
{
    long int l_int = 1234L;
    short int s_int = 1234;

    std::cout << "long " << l_int << " short " << s_int << "\n";

    unsigned char ch = 65;
    std::cout << "as char " << ch << " as int " << static_cast<int>(ch) << "\n";

    unsigned char o_ch = 0101;
    std::cout << "octal char " << o_ch << " as int " << static_cast<int>(o_ch) << "\n";

    // Here is a constant
    const float PI = 3.1415926;
    std::cout << "PI = " << PI << "\n";

    // Here is a reference
    // declaring variables with c++ syntax
    int i_src(12);
    int& i_ref(i_src);

    std::cout << "ref test. start value: " << i_src << ", " << i_ref << "\n";

    i_src = 13;
    std::cout << "ref test. end value: " << i_src << ", " << i_ref << "\n";
}

