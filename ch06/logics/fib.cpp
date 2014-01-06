#include <iostream>

int main()
{
    int seq_ct;
    int current_idx;
    int last_val;
    int this_val;
    int next_val;

    std::cout << "Enter the number of cycles: ";
    std::cin >> seq_ct;
    if (seq_ct > 0){
        std::cout << "Computing " << seq_ct << " cycles with a while loop...\n";
        current_idx = 1;
        last_val = 0;
        this_val = 1;
        next_val = 1;
        while(current_idx <= seq_ct){
            std::cout << current_idx << " " << this_val << "\n";
            last_val = this_val;
            this_val = next_val;
            next_val = this_val + last_val;
            current_idx++;
        }

        std::cout << "Computing " << seq_ct << " cycles with a for loop...\n";
        last_val = 0;
        this_val = 1;
        next_val = 1;
        for(current_idx = 1; current_idx <= seq_ct; current_idx++){
            std::cout << current_idx << " " << this_val << "\n";
            last_val = this_val;
            this_val = next_val;
            next_val = this_val + last_val;
        }


    } else {
        std::cout << seq_ct << " is invalid.\n";
    }
    return (0);
}

