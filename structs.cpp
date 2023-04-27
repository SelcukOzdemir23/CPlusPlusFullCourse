#include <iostream>

struct student
{
   std::string name;
   double gpa;
   bool enrolled;

};


int main()
{
   student student1;
   student1.name = "Ahmet";
   student1.gpa = 3.2;
   student1.enrolled = true;

   std::cout << student1.name << "\n";
   std::cout << student1.gpa << "\n";
   std::cout << student1.enrolled << "\n";


   student student2;
   student2.name = "Osmam";
   student2.gpa = 4.4;
   student2.enrolled = false;

   std::cout << student2.name << "\n";
   std::cout << student2.gpa << "\n";
   std::cout << student2.enrolled << "\n";

   return 0;
}
