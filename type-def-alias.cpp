#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string,int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

/*Instead of using typedef use USING*/

using text_t = std::string;
using number_t = int;
int main()
{
    
   text_t firstName = "Bro";
   number_t age = 21;

   std::cout <<firstName<<"\n";

   std::cout <<age<<"\n";
   return 0;
}
