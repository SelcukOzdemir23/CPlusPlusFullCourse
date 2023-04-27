#include <iostream>

int main()
{
   //fill() Fill a range of elements with a specified value
   //fil(begin,eng,value)

   const int SIZE = 100;
   std::string foods[100];
   fill(foods, foods+ SIZE/2, "pizza");
   fill(foods+(SIZE/2+1), foods+ SIZE, "hamburger");


   for (auto food : foods)
   {
      std::cout << food << "\n";
   }
   

   
   return 0;
}
