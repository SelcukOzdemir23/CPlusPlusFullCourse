#include <iostream>

double square(double length);
double cube (double length);

std::string concatString (std::string string1, std::string string2);

int main()
{
   double length = 5.0;
   double area = square(length);
   double volume = cube(length);
   std::cout << "Area: " << area << "cm^2\n";
   std::cout << "Volume: " << volume << "cm^3\n";



   std::string firstName = "Selcuk";
   std::string lastName = "Ozdemir";

   std::string fullName = concatString(firstName,lastName);

   std::cout << fullName + " Ahmet";

   return 0;
}

std::string concatString(std::string string1,std::string string2){
   return string1 + " " + string2;
}

double square(double length){
   double result = length * length;
   return result;
}

double cube (double length){
   double result = length * length *length;
   return result;
}