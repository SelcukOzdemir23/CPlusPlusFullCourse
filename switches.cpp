#include <iostream>

int main()
{
   int month;
   std::cout << "Enter the month (1-12): ";
   std::cin >> month;

   switch (month)
   {
   case 1:
      std::cout << "It's January";
      break;
   case 2:
      std::cout << "It's February";
   default: //nothing matches
      std::cout << "Be a good guy";
   }


   char grade;
   std::cout << "What letter grade?: ";

   std::cin >> grade;

   switch (grade)
   {
      case 'A':
         std::cout << "You did great";
         break;
      case 'B':
         std::cout << "You did good";
         break;
      case 'C':
         std::cout << "You did okay";
         break;
      case 'D':
         std::cout << "You did not do good";
         break;
      case 'F':
         std::cout << "YOU FAILED!";
         break;
      
      default:
         break;
   }

   return 0;
}
