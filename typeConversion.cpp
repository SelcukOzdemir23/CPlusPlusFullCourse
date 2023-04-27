#include <iostream>

int main()
{
    //conversion a value of one data type to another
   double x = (int)3.14;

   std::cout <<x <<"\n";


   char y = 100;
   std::cout << y <<"\n";

   std::cout << (char)100<<"\n";

   int correct = 8;
   int questions = 10;
   double score = correct/(double)questions*100;
   std::cout << score<<"\n";
   return 0;
}
