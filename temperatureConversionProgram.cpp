#include <iostream>

int main()
{
   double temp;
   char unit;

   std::cout << "****** Temperature Conversion ******\n";

   std::cout << "F = Fahrenheit \n C = Celsius \n What unit would you like to convert to? : ";
   std::cin >> unit;

   if (unit == 'F' || unit =='f')
   {
      std::cout << "Enter the temperature in Celcius";
      std::cin >> temp;

      temp = (1.8 * temp) + 32.0;
      std::cout << "Temperature is: " << temp << "F \n";
   }
   else if (unit == 'C' || unit == 'c')
   {
      std::cout << "Enter the temperature in Fahrenheit";
      std::cin >> temp;

      temp = (temp -32)/1.8;
      std::cout << "Temperature is: " << temp << "C \n";
   }
   else
   {
      std::cout << "boş Yapma";
   }
   
   
   


   


   std::cout << "\n****** ****** ***** ******";


   return 0;
}
