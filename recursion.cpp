#include <iostream>

void walk(int steps);
void walk2(int steps);
int factorial(int number);
int factorial2(int num);
int main()
{
   // iterative  vs recursion

   std::cout << factorial2(10);

   return 0;
}

int factorial2(int num){
   if (num>1)
   {
      return num*factorial2(num-1);
   }
   else{
      return 1;
   }
   
}

int factorial(int number){
   int result = 1;
   for (int i = 1; i <=number; i++)
   {
      result*=i;
   }
   return result;
   
}

void walk(int steps){
    for (int i = 0; i < steps; i++)
   {
      std::cout << "you take a step\n";
   }
   
}

void walk2(int steps){
   if (steps>0)
   {
      std::cout << "You take a step \n";
      walk2(steps-1);
   }
   
}