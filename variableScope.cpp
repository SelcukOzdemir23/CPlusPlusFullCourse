#include <iostream>

int myNum = 3;

void printNum();
int main()
{
   //Local Variables
   //Global Variables
   printNum();
   int myNum = 1;
   std::cout << myNum <<"\n";
   return 0;
}

void printNum(){
   // std::cout << myNum; could not be
   int myNum = 2;
   std::cout <<myNum << "\n";
}
