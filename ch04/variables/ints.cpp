#include <iostream>

int main(){

    int int_dem;
    int int_num;
    float flt_dem;
    float flt_num;

    int_num = 95;
    int_dem = 12;

    flt_num = 95.0;
    flt_dem = 12.0;

    std::cout << " i/i " << int_num / int_dem 
              << " i/f " << int_num / flt_dem 
              << " f/i " << flt_num / int_dem
              << " f/f " << flt_num / flt_dem << "\n";
}

