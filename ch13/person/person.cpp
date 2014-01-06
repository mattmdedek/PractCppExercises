#include <iostream>

class person {
    private:
        std::string first_name;
        std::string last_name;

    public:
        person(){
            first_name = "anon";
            last_name = "anon";
        }
        
        person(const std::string first, const std::string last){
            first_name = first;
            last_name = last;
        }
        
        person(const person& person_template){
            first_name = person_template.first_name;
            last_name = person_template.last_name;
        }
        
        ~person(){
            std::cerr << "Oh my god, they killed " << first_name << "\n";
        }
        
        void print_first(){
            std::cout << first_name << "\n";
        }
        
        void print_last(){
            std::cout << last_name << "\n";
        }
        
        std::string get_first(){
            return first_name;
        }
        
};

int main(){
    person matt("Matt", "Dedek");
    person matt_clone(matt);
    person copy_matt;

    copy_matt = matt;
    std::cout << copy_matt.get_first() << "\n";

    std::cout << matt.get_first() << "\n";

    matt.print_first();
    matt_clone.print_first();
    return(0);
}

