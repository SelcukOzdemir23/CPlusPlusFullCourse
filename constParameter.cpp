#include <iostream>
void printInfo(std::string name, int age);
void printInfo(const std::string &name, const int &age);
int main()
{
   // const paramtere = secure invent references pointers

   std::string name = "Bro";
   int age = 21;

   printInfo(name,age);
   return 0;
}

void printInfo(const std::string &name, const int &age)
{
   std::cout << name << "\n";
   std::cout << age << "\n";
}
