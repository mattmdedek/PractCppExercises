#include <iostream>

int main()
{
    float total = 0.0;
    float input_value;
    char input_operator;
    float prev_total;
    bool totaled;

    while(true){
        totaled = true;
        std::cout << "Enter an operator and a value or 'q' to quit.\n";
        std::cin >> input_operator >> input_value;
        prev_total = total;

        if(input_operator == '+'){
            total += input_value;
        } else if(input_operator == '-') {
            total -= input_value;
        } else if((input_operator == '*') || (input_operator == 'x')) {
            total *= input_value;
        } else if(input_operator == '/') {
            if(input_value == 0){
                std::cout << "Cannot divide by zero";
                totaled = false;
            } else {
                total /= input_value;
            }
        } else if(input_operator == 'q') {
            break;
        } else {
            std::cout << "Unsupported operator " << input_operator << "\n";
            totaled = false;
        }

        if(totaled){
            std::cout << prev_total << " " << input_operator << " " 
                      << input_value << " = " << total << "\n";
        }
    }

    return (0);
}
