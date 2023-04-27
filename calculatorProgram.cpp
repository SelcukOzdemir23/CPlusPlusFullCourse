#include <iostream>

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "***************CALCULATOR***************\n";
   std::cout << "Enter either (+ - * /): ";
   std::cin >> op;

   std::cout << "Enter Number 1: ";
   std::cin >> num1;

   std::cout << "Enter Number 2: ";
   std::cin >> num2;


   switch (op)
   {
   case '*':
      result = num1 * num2;
      std::cout << result;
      break;
   case '+':
      result = num1 + num2;
      std::cout << result;
      break;
   case '-':
      result = num1 - num2;
      std::cout << result;
      break;
   case '/':
      result = num1 / num2;
      std::cout << result;
      break;
   
   default:
      std::cout << "Doğru gir lan";
      break;
   }
    
    std::cout << "\n*****************************************";
   return 0;
}
