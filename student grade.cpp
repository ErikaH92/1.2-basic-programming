// student grade.cpp : This is where you will show the approximation of customers buying more than one drink per week. 
//

#include <iostream>

using namespace std;

int main()
{
  // identify names to store the value

    int number_of_customer = 0;
    int energy_taken = 0;
    double citrus_preference = 0.0;

    // display to the user to enter the number of customers that surveyed 

        cout << "enter the number of customers who surveyed at the soft drink company questionare\n";

        //the user's input will be stored into the number of customers.
        cin >> number_of_customer;
    
        // the if statement must be true to proceed with the next else if statement
        if (number_of_customer > 0) {
            cout << "Out of the number of customers who surveyed how many of them drink one or more energy drink?\n";
            cin >> energy_taken;

        }
        //else if statement will be true if the energy taken input is less than or equal to number of customer.
            else if  ( energy_taken <= number_of_customer) 

        { 
            // calculate the amount of energy taken per week and times it by 15 percent of those who drank more than one per week 
                double citrus_preference = (energy_taken * 0.15);
                //it will display to the user that the energy drinks taken were blank per week and out of those 15 percent prefer flavored citrus
                cout << " out of " << energy_taken << " energy drinks taken " << citrus_preference << " prefer the flavored energy citrus drink. \n";

            }

        // if entered with a higher number it will show an error 
            else {
                cout << " energy taken cannot exceed the number of customers. \n";
            }
        } //if enter number of customers greater than zero, will show error.
        else {
        cout << " number of customers must be greater than zero. \n";
    }
        {
  return 0;

}

