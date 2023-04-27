#include <iostream>

int main()
{
   int num;
   int guess;
   int tries;

   srand(time(NULL));
   num = (rand() %100) + 1;
   std::cout << "********** NUMBER GUESSING GAME **********\n";

   do
   {
      std::cout << "Enter a guess between (1-100)\n";
      std::cin >> guess;

      if (guess>num)
      {
         std::cout << "Too high!\n";
      }
      else if (guess<num)
      {
         std::cout << "Too low!\n";
      }
      else
      {
         std::cout << "CORRECT\n Guess: " <<guess; 
      }
      
      
      
   } while (guess!=num);
   

   return 0;
}
