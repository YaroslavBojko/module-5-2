#include <iostream>

int main() {
   int day;
   std::cout << "Enter the day number: ";
   std::cin >> day;

   if (day % 7 == 0 || day % 7 == 6 || (day >= 1 && day <=5) || (day >= 8 && day <= 10))
       std::cout << "Day off!!!" << std::endl;
   else
       std::cout << "Working day!!!" << std::endl;

}
