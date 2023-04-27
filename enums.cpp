#include <iostream>

enum Day{sunday = 0,monday = 1,tuesday = 2,wednesday = 3,
thursday = 4,friday = 5,saturday = 6};

int main()
{
    
   Day today = sunday;

   switch (today)
   {
   case sunday:
      std::cout << "normal";
      break;
   case monday:
      std::cout << "normal";
      break;
   case tuesday:
      std::cout << "normal";
      break;
   case wednesday:
      std::cout << "normal";
      break;
   
   default:
      break;
   }
   return 0;
}
