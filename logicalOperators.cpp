#include <iostream>

int main()
{
   //&&, || , !

   int temp;
   bool sunny = true;

   std::cout << "Enter the temperature \n";
   std::cin >> temp;

   if (temp <= 0 || temp>= 30)
   {
      std::cout << "The temperature is good\n";
   }
   else
   {
      std::cout << "The temperature is bad\n";
   }
   

   if (!sunny)
   {
      std::cout << "It's coludy  outside";
   }
   else
   {
      std::cout << "It's sunny outside";
   }
   
   
   
    

   return 0;
}
