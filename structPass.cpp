#include <iostream>

struct Car
{
   std::string model;
   int year;
   std::string color;
};

void printCar(Car &car);
void paintVar(Car &car, std::string color);
int main()
{
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";
   paintVar(car1,"silver");

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";
   paintVar(car2,"white");

   printCar(car1);
   printCar(car2);
   return 0;
}


void printCar(Car &car){
   std::cout << &car << "\n";
   std::cout << car.model << "\n";
   std::cout << car.color << "\n";
   std::cout << car.year << "\n";
}

void paintVar(Car &car, std::string color){
   car.color = color;
}