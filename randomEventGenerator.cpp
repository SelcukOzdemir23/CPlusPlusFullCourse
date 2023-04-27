#include <iostream>
#include <ctime>
int main()
{
   srand(time(0));

   int randNum = rand() % 5+1;
   switch (randNum)
   {
   case 1:
      std::cout << "you win a bumper sticker\n";
      break;
   case 2:
      std::cout << "you win a T-shirt\n";
      break;
   case 3:
      std::cout << "you win a Free Lunch\n";
      break;
   case 4:
      std::cout << "you win a Concert Ticket\n";
      break;
   case 5:
      std::cout << "you win a Gift Card\n";
      break;
   
   default:
      break;
   }

   return 0;
}
