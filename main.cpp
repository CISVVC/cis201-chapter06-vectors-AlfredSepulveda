/**
*file: main.cpp
*description: using vectors and arrays chapter 6.13
*Author: Alfred Sepulveda
*Email: sepulvedaa124975@student.vvc.edu
*/
#include<iostream>
#include<vector>

int main()

{
   //start with vectors to include day, amount, and description.
   std::vector<int> day;
   std::vector<double> amount;
   std::vector<std::string> description;

   double best_amount = 1;
   int best_day = 0;
   // while loop to ask user for input
   bool more = true;
   while (more)
      {
         std::string next_description;
         std::cout << "Please enter the description ";
         std::getline (std::cin, next_description);
         description.push_back(next_description);
         
         double next_amount;
         std::cout << "Please enter the amount ";
         std::cin >> next_amount;
         amount.push_back(next_amount);

         int next_day;
         std::cout << "Please enter the day ";
         std::cin >> next_day;
         day.push_back(next_day);
   //used to get rid of remainder
         std::string remainder;
         std::getline (std::cin, remainder);
   //ask user is done entering data
         std::cout << "More data? y/n ";
         std::string answer;
         std::getline (std::cin, answer);
       if (answer != "y") more = false;
      }
   for(int i = 0;i<description.size(); i++)
      {
   //display the contents of the data and adding the interest.
         double interest = 0.5;
         std::cout << "day: " << day[i]
         << " amount: " << amount[i]
         << " interest acquired: " << amount[i] * interest / 100
         << " description: " << description[i] << std::endl;
         }
      return 0;
}

