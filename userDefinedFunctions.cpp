#include <iostream>
void happyBirthday(std::string birthdayPerson,int age);


int main() //main function
{
   std::string name ="Ozdemir";
   int age = 21;

   happyBirthday(name,age);
   return 0;
}
void happyBirthday(std::string birthdayPerson,int age){
   std::cout << "Happy Birthday to you\n" << birthdayPerson<< "\n" << age;
}