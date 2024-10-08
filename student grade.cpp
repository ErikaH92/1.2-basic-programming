// student grade.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This will have two codes for the programming homework. 

#include <iostream>

using namespace std;








int main()

{

    //identify the variables and one of them is identified as a character to store character 
    char place;
    //where the number of gas will be stored in double 
    double gallon_of_gas;
    //where the number of distance will be stored in double format
    double distance;
    //displays to the user if you are driving in town or highway 
   cout << "If you are driving in town enter T, if you are driving on highway enter H \n"; 
    //using place as a string to store the characters of T and H
   cin>> place;
   //displays to user how many gallon of gas it has in the car and to not go over 20 gallon
   cout << "How many gallons of gas do you have in your car? \n"; "Your gas tank has a max capacity of 20-gallon \n";
   //where the number of gas will be stored 
   cin >> gallon_of_gas; 
   //in the if statement it shows that if the user enters T it will show the amount of gas it can drive to town
   if
       (place == 'T') {

       distance = gallon_of_gas * 23.5;

       cout << "The distance you could drive in town is " << distance << " miles on " << gallon_of_gas << " gallons of gas. ";
   }
   //if the user enters H it will then proceed with the statement and calculate the distance by using the number of gas and stored value of milage
   else if 

       (place == 'H')
   {
       distance = gallon_of_gas * 28.9;
       //it will display to the user the distance you could drive in the high way is blank miles on blank gallons of gas
       cout << "The distace you could drive on the highway is " << distance << " miles on " << gallon_of_gas << "gallons of gas. ";
   }
   //informing user the error would display to only enter T or H
   else
   {
       cout << "Can only enter T or H \n";
   }


return 0;
}



