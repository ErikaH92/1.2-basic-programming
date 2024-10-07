// student grade.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This will have two codes for the programming homework. 

#include <iostream>

using namespace std;








int main()

{

    
    char place;

    double gallon_of_gas;

    double distance;

   cout << "If you are driving in town enter T, if you are driving on highway enter H \n"; 
    
   cin>> place;

   cout << "How many gallons of gas do you have in your car? \n"; "Your gas tank has a max capacity of 20-gallon \n";

   cin >> gallon_of_gas; 

   if
       (place == 'T') {

       distance = gallon_of_gas * 23.5;

       cout << "The distance you could drive in town is " << distance << " miles on " << gallon_of_gas << " gallons of gas. ";
   }
   
   else if 

       (place == 'H')
   {
       distance = gallon_of_gas * 28.9;

       cout << "The distace you could drive on the highway is " << distance << " miles on " << gallon_of_gas << "gallons of gas. ";
   }

   else
   {
       cout << "Can only enter T or H \n";
   }


return 0;
}



