// student grade.cpp : This is where you will show the approximation of customers buying more than one drink per week. 
//

#include <iostream>

using namespace std;

int main()
{
  

    int number_of_customer = 0;
    int energy_taken = 0;
    double citrus_preference = 0.0;

    

        cout << "enter the number of customers who surveyed at the soft drink company questionare\n";

        cin >> number_of_customer;
    
        if (number_of_customer > 0) {
            cout << "Out of the number of customers who surveyed how many of them drink one or more energy drink?\n";
 cin >> energy_taken;
        }


        if (energy_taken <= number_of_customer) {

            double citrus_preference = (energy_taken * 0.15);

            cout << " out of " << energy_taken << " energy drinks taken " << citrus_preference << " prefer the flavored energy citrus drink. \n";
       

        }

        else {
            cout << " energy taken cannot exceed the number of customers. \n";
        }
    else {
        cout << " number of customers must be greater than zero. \n";
    }
  return 0;

}

