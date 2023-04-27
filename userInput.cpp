#include <iostream>

//cout
//cin

int main()
{
    std::string name;
    int age;

    std::cout <<"What's your age? : ";
    std::cin >> age;

    std::cout << "What's your full name? : ";
    std::getline(std::cin >>std::ws,name); //avoiding gap problem

    
   
    std::cout <<"Hello: " <<name;
    std::cout <<"Hello: " <<age;

   return 0;
}
