#include <iostream>

int main()
{
   // null value a special value that means something has no value;

   int *pointer = nullptr;
   int x = 123;
   pointer = &x;

   if (pointer == nullptr)
   {
      std::cout << "address was not assigned \n";
   }
   else
   {
      std::cout << "Address was assigned \n";
      std::cout << *pointer;
   }
   
   

   return 0;
}
