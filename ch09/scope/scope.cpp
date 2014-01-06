#include <iostream>

int test_global = -999; // global scope

namespace matt {
    int test_global = 88;
};

int main()
{
   ///matt::test_global = 88;
   if(1 == 1){
      int test_global = 0;
      std::cout << "local? " << test_global << "\n";
      // here are bare curlies that isolate yet another declaration
      {
          int test_global = -1;
          std::cout << "super local? " << test_global << "\n";
      }
   }

   /**
    commented this out because it throws an ugly warning...
    even though it works

   for(int test_global = 0; test_global < 3; test_global++){
       std::cout << "test_global in the for loop " << test_global << "\n";
   }

   **/

   std::cout << "global? " << test_global << "\n";
   std::cout << "In namespace matt: " << matt::test_global << "\n";
}

