#include <iostream>

int main()
{
   //Sizeof() /// determines the size in bytes of a:


   std::string name = "Bros";
   double gpa = 2.5;
   char grade = 'F';
   bool student = true;
   char grades[] = {'A','B','C','D','F'};
   std::string students[] = {"Spongebob","Patrick","Squidward"};

   std::cout << sizeof(gpa) << " bytes\n";
   std::cout << sizeof(name) << " bytes\n";
   std::cout << sizeof(grade) << " bytes\n";
   std::cout << sizeof(grades) << " bytes\n";
   std::cout << sizeof(grades)/sizeof(grades[0]) << " elements\n";
   std::cout << sizeof(students)/sizeof(students[0]) << " elements";


   return 0;
}
