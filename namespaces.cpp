#include <iostream>
namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}



int main()
{
    using namespace second;
    using std::cout;
    using std::string;

    string name = "Ahmet";

    cout << name <<"\n";
    
    std::cout << x <<"\n";

    std::cout << first::x <<"\n";

   return 0;
}
