#include <iostream>
#include <cassert>

class bro {
    friend class dude;
    private:
        int beers;
        std::string name;
    public:
        bro(const std::string in_name, const int in_beers){
            name = in_name;
            beers = in_beers;
        }
        void print_beers(){
            std::cout << name << " has " << beers << " beers.\n";
        }
};

class dude {
    private:
        int beers;
        std::string name;
        std::string girlfriend;
    public:
        dude(const std::string in_name, const int in_beers, const std::string in_girl){
            name = in_name;
            beers = in_beers;
            girlfriend = in_girl;
        }
        void share_beer(bro& broham){
            assert(beers > 0);
            broham.beers++;
            --beers;
            std::cout << name << " shared a beer\n";
        }
        void print_beers(){
            std::cout << name << " has " << beers << " beers.\n";
        }
};

int main()
{
    dude the_dude("Todd", 10, "Sally");
    bro the_bro("Devin", 0);

    the_dude.print_beers();
    the_bro.print_beers();

    the_dude.share_beer(the_bro);
    the_dude.share_beer(the_bro);
    the_dude.share_beer(the_bro);

    the_dude.print_beers();
    the_bro.print_beers();

    return (0);
}

